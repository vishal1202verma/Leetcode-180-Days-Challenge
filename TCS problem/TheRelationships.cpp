#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

struct Person {
    string firstName;
    string familyName;
    string birthFamilyName;
    string gender;
    string fatherName;
    string spouseName;
    int age;

    Person(string first, string family, string birth, string gen, string father, string spouse, int a)
        : firstName(first), familyName(family), birthFamilyName(birth), gender(gen), fatherName(father), spouseName(spouse), age(a) {}
};

struct Family {
    string leaderName;
    int leaderAge;
    int familySize;

    Family(string leader, int age, int size)
        : leaderName(leader), leaderAge(age), familySize(size) {}
};

map<string, Person> people;
map<string, Family> families;

bool comparePeople(const Person& p1, const Person& p2) {
    if (p1.age != p2.age) {
        return p1.age > p2.age;
    }
    if (p1.familyName != p2.familyName) {
        return p1.familyName < p2.familyName;
    }
    return p1.firstName < p2.firstName;
}

void chooseLeader(const string& familyName) {
    vector<Person> familyMembers;
    for (const auto& person : people) {
        if (person.second.familyName == familyName) {
            familyMembers.push_back(person.second);
        }
    }
    if (!familyMembers.empty()) {
        sort(familyMembers.begin(), familyMembers.end(), comparePeople);
        families[familyName] = Family(familyMembers[0].firstName, familyMembers[0].age, familyMembers.size());
    }
}

void processMarriage(const string& person1Name, const string& person2Name) {
    Person& person1 = people[person1Name];
    Person& person2 = people[person2Name];

    if (person1.familyName == person2.familyName) {
        return;
    }

    string family1Name = person1.familyName;
    string family2Name = person2.familyName;

    person1.familyName = family1Name;
    person2.familyName = family1Name;

    for (auto& person : people) {
        if (person.second.familyName == family2Name) {
            person.second.familyName = family1Name;
        }
    }

    chooseLeader(family1Name);
    chooseLeader(family2Name);
}

void processDivorce(const string& person1Name, const string& person2Name) {
    Person& person1 = people[person1Name];
    Person& person2 = people[person2Name];

    if (person1.familyName != person2.familyName) {
        return;
    }

    string familyName = person1.familyName;
    person1.familyName = person1.birthFamilyName;
    person2.familyName = person2.birthFamilyName;

    chooseLeader(familyName);
}

void processBirth(const string& babyName, const string& gender, const string& fatherName, const string& motherName) {
    Person& father = people[fatherName];

    if (father.spouseName == motherName) {
        father.spouseName = "NA";
    }

    string babyFamilyName = father.familyName;

    Person baby(babyName, babyFamilyName, babyFamilyName, gender, fatherName, "NA", 0);
    people[babyName] = baby;

    chooseLeader(babyFamilyName);
}

void processDeath(const string& personName) {
    Person& person = people[personName];

    if (person.familyName != person.birthFamilyName) {
        person.familyName = person.birthFamilyName;
        chooseLeader(person.birthFamilyName);
    }

    if (person.spouseName != "NA") {
        people[person.spouseName].spouseName = "NA";
    }

    chooseLeader(person.familyName);
}

void printAll() {
    vector<Person> alivePeople;

    for (const auto& person : people) {
        if (person.second.age > 0) {
            alivePeople.push_back(person.second);
        }
    }

    sort(alivePeople.begin(), alivePeople.end(), comparePeople);

    for (const auto& person : alivePeople) {
        cout << person.firstName << " " << person.familyName << " " << person.birthFamilyName << " " << person.gender << " " << person.fatherName << " " << person.spouseName << " " << person.age << " " << families[person.familyName].leaderName << endl;
    }
}

void printOne(const string& personName) {
    const Person& person = people[personName];
    cout << person.firstName << " " << person.familyName << " " << person.birthFamilyName << " " << person.gender << " " << person.fatherName << " " << person.spouseName << " " << person.age << " " << families[person.familyName].leaderName << endl;
}

int main() {
    int numRecords;
    cin >> numRecords;

    for (int i = 0; i < numRecords; i++) {
        string firstName, familyName, birthFamilyName, gender, fatherName, spouseName;
        int age;
        cin >> firstName >> familyName >> birthFamilyName >> gender >> fatherName >> spouseName >> age;

        people[firstName] = Person(firstName, familyName, birthFamilyName, gender, fatherName, spouseName, age);

        if (familyName != "NA") {
            chooseLeader(familyName);
        }
    }

    int numEvents;
    cin >> numEvents;

    for (int i = 0; i < numEvents; i++) {
        string eventType;
        cin >> eventType;

        if (eventType == "MA") {
            string person1, person2;
            cin >> person1 >> person2;
            processMarriage(person1, person2);
        } else if (eventType == "DI") {
            string person1, person2;
            cin >> person1 >> person2;
            processDivorce(person1, person2);
        } else if (eventType == "BI") {
            string babyName, gender, fatherName, motherName;
            cin >> babyName >> gender >> fatherName >> motherName;
            processBirth(babyName, gender, fatherName, motherName);
        } else if (eventType == "DE") {
            string personName;
            cin >> personName;
            processDeath(personName);
        } else if (eventType == "YP") {
            int years;
            cin >> years;
            for (auto& person : people) {
                person.second.age += years;
            }
        } else if (eventType == "PA") {
            printAll();
        } else if (eventType == "PO") {
            string personName;
            cin >> personName;
            printOne(personName);
        }
    }

    return 0;
}
