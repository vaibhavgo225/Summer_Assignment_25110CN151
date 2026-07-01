#include <iostream>
#include <string>
using namespace std;

int main() {
    string options[6] = {"Music", "Gaming", "Sports", "Reading", "Travel", "Movies"};
    bool person1[6] = {false};
    bool person2[6] = {false};
    string name1, name2;
    int choice;

    cout << "Interest options:\n";
    for (int i = 0; i < 6; i++) {
        cout << i + 1 << ". " << options[i] << "\n";
    }

    cout << "\nEnter first person's name: ";
    cin >> name1;
    cout << "Enter interest numbers for " << name1 << " (0 to stop): ";
    while (cin >> choice && choice != 0) {
        if (choice >= 1 && choice <= 6) {
            person1[choice - 1] = true;
        }
    }

    cout << "\nEnter second person's name: ";
    cin >> name2;
    cout << "Enter interest numbers for " << name2 << " (0 to stop): ";
    while (cin >> choice && choice != 0) {
        if (choice >= 1 && choice <= 6) {
            person2[choice - 1] = true;
        }
    }

    int matchCount = 0, totalCount = 0;
    cout << "\nCommon interests:\n";
    for (int i = 0; i < 6; i++) {
        if (person1[i] && person2[i]) {
            matchCount++;
            cout << "- " << options[i] << "\n";
        }
        if (person1[i] || person2[i]) {
            totalCount++;
        }
    }

    float percentage = totalCount == 0 ? 0 : ((float)matchCount / totalCount) * 100;

    cout << "\nFriendship Match: " << percentage << "%\n";

    return 0;
}