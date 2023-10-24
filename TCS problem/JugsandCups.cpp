#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n; // Number of cups
    cin >> n;

    vector<int> cupSizes(n);
    for (int i = 0; i < n; i++) {
        cin >> cupSizes[i];
    }

    int jugSize;
    cin >> jugSize;

    sort(cupSizes.rbegin(), cupSizes.rend()); // Sort cup sizes in descending order

    vector<int> usedCups(n, 0);
    int jugCapacity = 0;

    for (int i = 0; i < n; i++) {
        while (jugCapacity + cupSizes[i] <= jugSize) {
            jugCapacity += cupSizes[i];
            usedCups[i]++;
        }
    }

    // Output the used cup sizes and their frequencies
    for (int i = 0; i < n; i++) {
        if (usedCups[i] > 0) {
            cout << cupSizes[i] << " ";
        }
    }
    cout << endl;

    for (int i = 0; i < n; i++) {
        if (usedCups[i] > 0) {
            cout << usedCups[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
