#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Task {
    string name;
    string type;
    int time;
    int completionTime;

    Task(string n, string t, int ti) : name(n), type(t), time(ti), completionTime(-1) {}
};

struct Worker {
    string name;
    int availableTime;

    Worker(string n) : name(n), availableTime(0) {}
};

int main() {
    int n; // Number of workers
    cin >> n;

    vector<Worker> workers;
    for (int i = 1; i <= n; i++) {
        workers.emplace_back("W" + to_string(i));
    }

    int m; // Number of tasks
    cin >> m;

    vector<Task> tasks;
    for (int i = 1; i <= m; i++) {
        string name, type;
        int time;
        cin >> name >> type >> time;
        tasks.emplace_back(name, type, time);
    }

    // Assign tasks to workers
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (tasks[i].type == "Machine" && tasks[i].completionTime == -1) {
                tasks[i].completionTime = workers[j].availableTime;
                workers[j].availableTime += tasks[i].time;
                break;
            } else if (tasks[i].type == "Manual" && tasks[i].completionTime == -1) {
                int minAvailableTime = workers[0].availableTime;
                int workerIndex = 0;
                for (int k = 1; k < n; k++) {
                    if (workers[k].availableTime < minAvailableTime) {
                        minAvailableTime = workers[k].availableTime;
                        workerIndex = k;
                    }
                }
                tasks[i].completionTime = minAvailableTime;
                workers[workerIndex].availableTime += tasks[i].time;
                break;
            }
        }
    }

    // Sort the tasks based on completion time and task name
    sort(tasks.begin(), tasks.end(), [](const Task &a, const Task &b) {
        if (a.completionTime != b.completionTime) {
            return a.completionTime < b.completionTime;
        }
        return a.name < b.name;
    });

    // Print the output
    for (const Task &task : tasks) {
        cout << task.name << " " << task.completionTime << endl;
    }

    return 0;
}
