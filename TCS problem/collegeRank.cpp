#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>

using namespace std;

struct Student {
    string id;
    double percentage;
    string choice1, choice2, choice3;

    Student(string i, double p, string c1, string c2, string c3)
        : id(i), percentage(p), choice1(c1), choice2(c2), choice3(c3) {}
};

struct College {
    string name;
    int seats;
    double cutoff;

    College(string n, int s) : name(n), seats(s), cutoff(0.0) {}
};

bool compareStudents(const Student& s1, const Student& s2) {
    if (s1.percentage != s2.percentage) {
        return s1.percentage > s2.percentage;
    }
    return s1.id < s2.id;
}

bool compareColleges(const College& c1, const College& c2) {
    if (c1.cutoff != c2.cutoff) {
        return c1.cutoff > c2.cutoff;
    }
    return c1.name < c2.name;
}

int main() {
    int numColleges, numStudents;
    cin >> numColleges >> numStudents;

    vector<College> colleges;
    map<string, int> collegeSeats;

    for (int i = 0; i < numColleges; i++) {
        string collegeName;
        int collegeSeatsCount;
        cin >> collegeName >> collegeSeatsCount;
        colleges.push_back(College(collegeName, collegeSeatsCount));
        collegeSeats[collegeName] = collegeSeatsCount;
    }

    vector<Student> students;

    for (int i = 0; i < numStudents; i++) {
        string studentId, collegeChoice1, collegeChoice2, collegeChoice3;
        double studentPercentage;
        cin >> studentId >> studentPercentage >> collegeChoice1 >> collegeChoice2 >> collegeChoice3;
        students.push_back(Student(studentId, studentPercentage, collegeChoice1, collegeChoice2, collegeChoice3));
    }

    sort(students.begin(), students.end(), compareStudents);

    for (int i = 0; i < numStudents; i++) {
        Student& student = students[i];

        if (collegeSeats[student.choice1] > 0) {
            colleges.push_back(College(student.choice1, 0));
            collegeSeats[student.choice1]--;
        }
        else if (collegeSeats[student.choice2] > 0) {
            colleges.push_back(College(student.choice2, 0));
            collegeSeats[student.choice2]--;
        }
        else if (collegeSeats[student.choice3] > 0) {
            colleges.push_back(College(student.choice3, 0));
            collegeSeats[student.choice3]--;
        }
    }

    sort(colleges.begin(), colleges.end(), compareColleges);

    for (int i = 0; i < numColleges; i++) {
        if (colleges[i].seats > 0) {
            colleges[i].cutoff = students[colleges[i].seats - 1].percentage;
        }
    }

    sort(colleges.begin(), colleges.end(), compareColleges);

    for (int i = 0; i < numColleges; i++) {
        cout << colleges[i].name << " ";
        if (colleges[i].cutoff == 0) {
            cout << "n/a";
        } else {
            cout << colleges[i].cutoff;
        }
        cout << endl;
    }

    return 0;
}
