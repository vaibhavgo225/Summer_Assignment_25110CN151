#include <iostream>
using namespace std;

int main() {
    int bookId[100];
    string bookName[100];
    bool issued[100];

    int n = 0, choice, id, i;

    do {
        cout << "\n===== MINI LIBRARY SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            cout << "Enter Book ID: ";
            cin >> bookId[n];

            cout << "Enter Book Name: ";
            cin >> bookName[n];

            issued[n] = false;
            n++;

            cout << "Book Added Successfully!\n";
            break;

        case 2:
            if(n == 0) {
                cout << "No books available.\n";
            }
            else {
                cout << "\nID\tBook Name\tStatus\n";
                for(i = 0; i < n; i++) {
                    cout << bookId[i] << "\t"
                         << bookName[i] << "\t\t";

                    if(issued[i])
                        cout << "Issued";
                    else
                        cout << "Available";

                    cout << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Book ID to search: ";
            cin >> id;

            for(i = 0; i < n; i++) {
                if(bookId[i] == id) {
                    cout << "\nBook Found!\n";
                    cout << "Book ID: " << bookId[i] << endl;
                    cout << "Book Name: " << bookName[i] << endl;

                    if(issued[i])
                        cout << "Status: Issued\n";
                    else
                        cout << "Status: Available\n";

                    break;
                }
            }

            if(i == n)
                cout << "Book not found.\n";

            break;

        case 4:
            cout << "Enter Book ID to issue: ";
            cin >> id;

            for(i = 0; i < n; i++) {
                if(bookId[i] == id) {
                    if(issued[i])
                        cout << "Book is already issued.\n";
                    else {
                        issued[i] = true;
                        cout << "Book Issued Successfully!\n";
                    }
                    break;
                }
            }

            if(i == n)
                cout << "Book not found.\n";

            break;

        case 5:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}