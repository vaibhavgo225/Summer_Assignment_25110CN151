#include <iostream>
using namespace std;

int main() {
    int empId[100];
    string empName[100];
    float salary[100];

    int n = 0, choice, id, i;

    do {
        cout << "\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Salary\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            cout << "Enter Employee ID: ";
            cin >> empId[n];

            cout << "Enter Employee Name: ";
            cin >> empName[n];

            cout << "Enter Salary: ";
            cin >> salary[n];

            n++;
            cout << "Employee added successfully.\n";
            break;

        case 2:
            if(n == 0) {
                cout << "No employee records found.\n";
            }
            else {
                cout << "\nID\tName\tSalary\n";
                for(i = 0; i < n; i++) {
                    cout << empId[i] << "\t"
                         << empName[i] << "\t"
                         << salary[i] << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Employee ID to search: ";
            cin >> id;

            for(i = 0; i < n; i++) {
                if(empId[i] == id) {
                    cout << "\nEmployee Found!\n";
                    cout << "ID: " << empId[i] << endl;
                    cout << "Name: " << empName[i] << endl;
                    cout << "Salary: " << salary[i] << endl;
                    break;
                }
            }

            if(i == n)
                cout << "Employee not found.\n";

            break;

        case 4:
            cout << "Enter Employee ID: ";
            cin >> id;

            for(i = 0; i < n; i++) {
                if(empId[i] == id) {
                    cout << "Enter New Salary: ";
                    cin >> salary[i];

                    cout << "Salary updated successfully.\n";
                    break;
                }
            }

            if(i == n)
                cout << "Employee not found.\n";

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