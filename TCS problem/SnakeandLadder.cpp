#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <sstream>

using namespace std;

struct BoardSquare {
    string type;  // "S", "L", or ""
    int target;

    BoardSquare() : type(""), target(0) {}
};

// Function to parse a square description like "S(5)" or "L(7)" into type and target
void parseSquare(string square, string& type, int& target) {
    if (square[0] == 'S') {
        type = "S";
    } else if (square[0] == 'L') {
        type = "L";
    }

    // Extract the target number
    stringstream ss(square.substr(2, square.size() - 3));
    ss >> target;
}

// Function to simulate the player's moves using DFS
void simulateGame(vector<vector<BoardSquare>>& board, int start, int end, vector<int>& diceRolls, int& snakes, int& ladders, int& position) {
    if (position == end) {
        return;  // The player has reached the end, no need to continue
    }

    if (diceRolls.empty()) {
        return;  // No more dice rolls left to use
    }

    int currentSquare = position;
    int nextSquare = position + diceRolls.back();
    diceRolls.pop_back();

    if (nextSquare > end) {
        return;  // Cannot move beyond the end square
    }

    string squareType = board[nextSquare / 10][nextSquare % 10].type;
    int squareTarget = board[nextSquare / 10][nextSquare % 10].target;

    if (squareType == "S") {
        snakes++;
        position = squareTarget;
    } else if (squareType == "L") {
        ladders++;
        position = squareTarget;
    } else {
        position = nextSquare;
    }

    simulateGame(board, start, end, diceRolls, snakes, ladders, position);
}

int main() {
    vector<vector<BoardSquare>> board(10, vector<BoardSquare>(10));
    int start, end;
    vector<int> diceRolls;

    // Read the board
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            string square;
            cin >> square;

            if (square == "Start") {
                start = i * 10 + j;
            } else if (square == "End") {
                end = i * 10 + j;
            } else {
                parseSquare(square, board[i][j].type, board[i][j].target);
            }
        }
    }

    // Read the dice inputs
    int roll;
    while (cin >> roll) {
        diceRolls.push_back(roll);
    }

    int position = start;
    int snakes = 0;
    int ladders = 0;

    simulateGame(board, start, end, diceRolls, snakes, ladders, position);

    if (position == end) {
        cout << "Possible " << snakes << " " << ladders << endl;
    } else {
        cout << "Not possible " << snakes << " " << ladders << " " << position << endl;
    }

    return 0;
}
