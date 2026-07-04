// Loan Mangement and EMI Calculator System

#include<iostream>
#include <fstream>
#include<cmath>
using namespace std;

class Customer{
public:
    string name;
    int loanID;
    float loanAmount;
    float remaining;
    float interestRate;
    float years;
    float emi;
};

void save(Customer c[], int loans){

    ofstream file("loans.txt");

    for(int i = 0; i < loans; i++){

        file << c[i].loanID << endl;
        file << c[i].name << endl;
        file << c[i].loanAmount << endl;
        file << c[i].interestRate << endl;
        file << c[i].years << endl;
        file << c[i].emi << endl;
        file << c[i].remaining << endl;
    }

    file.close();
}

void load(Customer c[], int &loans){

    ifstream file("loans.txt");

    loans = 0;

    while(file >> c[loans].loanID){

        file.ignore(); 

        getline(file, c[loans].name);

        file >> c[loans].loanAmount;
        file >> c[loans].interestRate;
        file >> c[loans].years;
        file >> c[loans].emi;
        file >> c[loans].remaining;

        file.ignore(); 

        loans++;
    }

    file.close();
}

int main(){

    int loans = 0;
    int choice;
    Customer c[50];

      load(c, loans);
    do{

        cout << "\n====== LoanVault: EMI Management System ======\n";
        cout << "1. Add Loan\n";
        cout << "2. View Loans\n";
        cout << "3. Search Loan\n";
        cout << "4. Delete Loan\n";
        cout << "5. Update Customer\n";
        cout << "6. Exit\n";
        cout << "Enter your choice : ";
        cin >> choice;
        cin.ignore();

        if(choice == 1){

            cout << "\nEnter Customer Name : ";
            getline(cin, c[loans].name);

            cout << "Enter Loan ID : ";
            cin >> c[loans].loanID;

            cout << "Enter Loan Amount : ";
            cin >> c[loans].loanAmount;

            cout << "Enter Annual Interest Rate (%) : ";
            cin >> c[loans].interestRate;

            cout << "Enter Loan Duration (Years) : ";
            cin >> c[loans].years;

            float r = c[loans].interestRate / 12 / 100;
            int n = c[loans].years * 12;

            c[loans].emi = (c[loans].loanAmount * r * pow(1 + r, n))
                           / (pow(1 + r, n) - 1);

            c[loans].remaining = c[loans].loanAmount;

            loans++;

           save(c,loans);
            cout << "\nLoan Added Successfully.\n";
        }

        else if(choice == 2){

            if(loans == 0){

                cout << "\nNo Records Found.\n";
            }

            else{

                cout << "\n------ LOAN RECORDS ------\n";

                for(int i = 0; i < loans; i++){

                    cout << "\nCustomer " << i + 1 << endl;
                    cout << "Name : " << c[i].name << endl;
                    cout << "Loan ID : " << c[i].loanID << endl;
                    cout << "Loan Amount : " << c[i].loanAmount << endl;
                    cout << "Interest Rate : " << c[i].interestRate << "%" << endl;
                    cout << "Duration : " << c[i].years << " Years" << endl;
                    cout << "Monthly EMI : " << c[i].emi << endl;
                    cout << "Remaining Amount : " << c[i].remaining << endl;
                }
            }
        }

        else if(choice == 3){

            int searchID;
            bool found = false;

            cout << "\nEnter Loan ID : ";
            cin >> searchID;

            for(int i = 0; i < loans; i++){

                if(c[i].loanID == searchID){

                    cout << "\nLoan Found\n";
                    cout << "Customer : " << c[i].name << endl;
                    cout << "Loan Amount : " << c[i].loanAmount << endl;
                    cout << "Monthly EMI : " << c[i].emi << endl;
                    cout << "Remaining Amount : " << c[i].emi << endl;

                    found = true;
                    break;
                }
            }

            if(found == false){

                cout << "\nLoan Not Found.\n";
            }
        }

        else if(choice == 4){

            int deleteID;
            bool found = false;

            cout << "\nEnter Loan ID : ";
            cin >> deleteID;

            for(int i = 0; i < loans; i++){

                if(c[i].loanID == deleteID){

                    for(int j = i; j < loans - 1; j++){

                        c[j] = c[j + 1];
                    }

                    loans--;
                    save(c,loans);

                    found = true;

                    cout << "\nLoan Record Deleted Successfully.\n";
                    break;
                }
            }

            if(found == false){

                cout << "\nLoan Not Found.\n";
            }
        }

        else if(choice == 5){

    int id;
    bool found = false;

    cout << "\nEnter Loan ID to pay EMI: ";
    cin >> id;

    for(int i = 0; i < loans; i++){

        if(c[i].loanID == id){

            found = true;

            cout << "\nCustomer: " << c[i].name << endl;
            cout << "Current Remaining Loan: " << c[i].remaining << endl;
            cout << "Monthly EMI: " << c[i].emi << endl;

            if(c[i].remaining <= 0){
                cout << "\nLoan already fully paid!\n";
                break;
            }
            c[i].remaining -= c[i].emi;

            if(c[i].remaining < 0){
                c[i].remaining = 0;
            }

            cout << "\nEMI Paid Successfully!\n";
            cout << "Remaining Loan: " << c[i].remaining << endl;

            save(c, loans);
            break;
        }
    }

    if(!found){
        cout << "\nLoan ID not found!\n";
    }
}

        else if(choice == 6){

            cout << "\nThank You!\n";
        }

        else{

            cout << "\nInvalid Choice.\n";
        }

    }while(choice != 6);

    return 0;
}