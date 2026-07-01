#include<iostream>
using namespace std;

int main() {

    int choice, basic;

    cout << "==================== ADVANCED CALCULATOR ====================\n";

    do {

        cout << "\n--------------- MAIN MENU ---------------\n";
        cout << "1. Basic Maths\n";
        cout << "2. Percentage Calculator\n";
        cout << "3. Exit\n";
        cout << "Enter your choice : ";
        cin >> choice;

        switch(choice) {

        case 1:

            do {

                int sumation = 0, subs, mult = 1;
                int sum, sub, multiply;
                int n, m;

                cout << "\n----------- BASIC MATHS -----------\n";
                cout << "1. Addition\n";
                cout << "2. Subtraction\n";
                cout << "3. Multiplication\n";
                cout << "4. Division\n";
                cout << "5. Exit Basic Maths\n";
                cout << "Enter your choice : ";
                cin >> basic;

                switch(basic) {

                case 1:

                    cout << "How many numbers do you want to add? ";
                    cin >> sum;

                    for(int i = 0; i < sum; i++) {
                        cout << "Enter number " << i + 1 << " : ";
                        cin >> n;
                        sumation += n;
                    }

                    cout << "Sum = " << sumation << endl;
                    break;

                case 2:

                    cout << "How many numbers do you want to subtract? ";
                    cin >> sub;

                    cout << "Enter number 1 : ";
                    cin >> subs;

                    for(int i = 1; i < sub; i++) {
                        cout << "Enter number " << i + 1 << " : ";
                        cin >> n;
                        subs -= n;
                    }

                    cout << "Result = " << subs << endl;
                    break;

                case 3:

                    cout << "How many numbers do you want to multiply? ";
                    cin >> multiply;

                    for(int i = 0; i < multiply; i++) {
                        cout << "Enter number " << i + 1 << " : ";
                        cin >> n;
                        mult *= n;
                    }

                    cout << "Product = " << mult << endl;
                    break;

                case 4:

                    cout << "Enter Dividend : ";
                    cin >> n;

                    cout << "Enter Divisor : ";
                    cin >> m;

                    if(m == 0) {
                        cout << "Division by zero is not possible.\n";
                    }
                    else {
                        cout << "Quotient = " << n / m << endl;
                        cout << "Remainder = " << n % m << endl;
                    }

                    break;

                case 5:
                    cout << "Returning to Main Menu...\n";
                    break;

                default:
                    cout << "Invalid Choice!\n";

                }

            } while(basic != 5);

            break;

        case 2:
            float percentage, number;

                cout << "Enter percentage: ";
                cin >> percentage;
                        
                cout << "Enter number: ";
                cin >> number;
                        
                cout << percentage << "% of " << number << " = "
                     << (percentage * number) / 100;
            break;

        case 3:
            cout << "\nThank you for using the calculator!\n";
            break;

        default:
            cout << "Invalid Choice!\n";

        }

    } while(choice != 3);

    return 0;
}