#include <iostream>
using namespace std;

int main() {
    string str;
    int choice, i;

    do {
        cout << "\n===== STRING OPERATIONS MENU =====\n";
        cout << "1. Enter String\n";
        cout << "2. Display String\n";
        cout << "3. Find Length\n";
        cout << "4. Convert to Uppercase\n";
        cout << "5. Convert to Lowercase\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice) {

        case 1:
            cout << "Enter a string: ";
            getline(cin, str);
            break;

        case 2:
            cout << "String: " << str << endl;
            break;

        case 3:
            cout << "Length of string = " << str.length() << endl;
            break;

        case 4:
            for(i = 0; i < str.length(); i++) {
                if(str[i] >= 'a' && str[i] <= 'z')
                    str[i] = str[i] - 32;
            }
            cout << "Uppercase String: " << str << endl;
            break;

        case 5:
            for(i = 0; i < str.length(); i++) {
                if(str[i] >= 'A' && str[i] <= 'Z')
                    str[i] = str[i] + 32;
            }
            cout << "Lowercase String: " << str << endl;
            break;

        case 6:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while(choice != 6);

    return 0;
}