#include <iostream>
using namespace std;

int main() {
    int arr[100], n = 0;
    int choice, i, value, pos;

    do {
        cout << "\n===== ARRAY MENU =====\n";
        cout << "1. Enter Array\n";
        cout << "2. Display Array\n";
        cout << "3. Insert Element\n";
        cout << "4. Delete Element\n";
        cout << "5. Search Element\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            cout << "Enter number of elements: ";
            cin >> n;

            cout << "Enter elements:\n";
            for(i = 0; i < n; i++)
                cin >> arr[i];
            break;

        case 2:
            if(n == 0) {
                cout << "Array is empty.\n";
            } else {
                cout << "Array Elements: ";
                for(i = 0; i < n; i++)
                    cout << arr[i] << " ";
                cout << endl;
            }
            break;

        case 3:
            if(n == 100) {
                cout << "Array is full.\n";
                break;
            }

            cout << "Enter position (1-" << n + 1 << "): ";
            cin >> pos;

            if(pos < 1 || pos > n + 1) {
                cout << "Invalid Position!\n";
                break;
            }

            cout << "Enter value: ";
            cin >> value;

            for(i = n; i >= pos; i--)
                arr[i] = arr[i - 1];

            arr[pos - 1] = value;
            n++;

            cout << "Element inserted successfully.\n";
            break;

        case 4:
            if(n == 0) {
                cout << "Array is empty.\n";
                break;
            }

            cout << "Enter position to delete: ";
            cin >> pos;

            if(pos < 1 || pos > n) {
                cout << "Invalid Position!\n";
                break;
            }

            for(i = pos - 1; i < n - 1; i++)
                arr[i] = arr[i + 1];

            n--;

            cout << "Element deleted successfully.\n";
            break;

        case 5:
            if(n == 0) {
                cout << "Array is empty.\n";
                break;
            }

            cout << "Enter value to search: ";
            cin >> value;

            for(i = 0; i < n; i++) {
                if(arr[i] == value) {
                    cout << "Element found at position " << i + 1 << endl;
                    break;
                }
            }

            if(i == n)
                cout << "Element not found.\n";

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