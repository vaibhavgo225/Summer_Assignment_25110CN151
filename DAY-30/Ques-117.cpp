#include <iostream>
using namespace std;

int main() {
    int roll[100], marks[100];
    string name[100];
    int n = 0;
    int choice, r, i;

    do {
        cout << "\n===== STUDENT RECORD SYSTEM =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student Record\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            cout << "Enter Roll Number: ";
            cin >> roll[n];

            cout << "Enter Name: ";
            cin >> name[n];

            cout << "Enter Marks: ";
            cin >> marks[n];

            n++;
            cout << "Student record added successfully.\n";
            break;

        case 2:
            if(n == 0) {
                cout << "No records found.\n";
            }
            else {
                cout << "\nRoll\tName\tMarks\n";
                for(i = 0; i < n; i++) {
                    cout << roll[i] << "\t"
                         << name[i] << "\t"
                         << marks[i] << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Roll Number to search: ";
            cin >> r;

            for(i = 0; i < n; i++) {
                if(roll[i] == r) {
                    cout << "\nStudent Found\n";
                    cout << "Roll Number: " << roll[i] << endl;
                    cout << "Name: " << name[i] << endl;
                    cout << "Marks: " << marks[i] << endl;
                    break;
                }
            }

            if(i == n)
                cout << "Student not found.\n";

            break;

        case 4:
            cout << "Enter Roll Number to update: ";
            cin >> r;

            for(i = 0; i < n; i++) {
                if(roll[i] == r) {
                    cout << "Enter New Name: ";
                    cin >> name[i];

                    cout << "Enter New Marks: ";
                    cin >> marks[i];

                    cout << "Record updated successfully.\n";
                    break;
                }
            }

            if(i == n)
                cout << "Student not found.\n";

            break;

        case 5:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}