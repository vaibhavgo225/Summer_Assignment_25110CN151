#include<iostream>
using namespace std;

int main(){

    string name[50];
    int accountNumber[50];
    float balance[50];

    int accounts = 0;
    int choice;

    do{

        cout<<"\n====== BANK ACCOUNT SYSTEM ======\n";
        cout<<"1. Create Account\n";
        cout<<"2. View Accounts\n";
        cout<<"3. Deposit Money\n";
        cout<<"4. Withdraw Money\n";
        cout<<"5. Exit\n";
        cout<<"Enter your choice : ";
        cin>>choice;
        cin.ignore();

        if(choice==1){

            cout<<"\nEnter Account Holder Name : ";
            getline(cin,name[accounts]);

            cout<<"Enter Account Number : ";
            cin>>accountNumber[accounts];

            cout<<"Enter Initial Balance : ";
            cin>>balance[accounts];

            accounts++;

            cout<<"\nAccount Created Successfully.\n";
        }

        else if(choice==2){

            if(accounts==0){

                cout<<"\nNo Accounts Found.\n";
            }

            else{

                for(int i=0;i<accounts;i++){

                    cout<<"\nAccount "<<i+1<<endl;
                    cout<<"Name : "<<name[i]<<endl;
                    cout<<"Account Number : "<<accountNumber[i]<<endl;
                    cout<<"Balance : "<<balance[i]<<endl;
                }
            }
        }

        else if(choice==3){

            int accNo;
            float amount;
            bool found=false;

            cout<<"\nEnter Account Number : ";
            cin>>accNo;

            for(int i=0;i<accounts;i++){

                if(accountNumber[i]==accNo){

                    cout<<"Enter Amount to Deposit : ";
                    cin>>amount;

                    balance[i]+=amount;

                    cout<<"\nAmount Deposited Successfully.\n";
                    cout<<"Current Balance : "<<balance[i]<<endl;

                    found=true;
                    break;
                }
            }

            if(found==false){

                cout<<"\nAccount Not Found.\n";
            }
        }

        else if(choice==4){

            int accNo;
            float amount;
            bool found=false;

            cout<<"\nEnter Account Number : ";
            cin>>accNo;

            for(int i=0;i<accounts;i++){

                if(accountNumber[i]==accNo){

                    cout<<"Enter Amount to Withdraw : ";
                    cin>>amount;

                    if(amount<=balance[i]){

                        balance[i]-=amount;

                        cout<<"\nWithdrawal Successful.\n";
                        cout<<"Current Balance : "<<balance[i]<<endl;
                    }

                    else{

                        cout<<"\nInsufficient Balance.\n";
                    }

                    found=true;
                    break;
                }
            }

            if(found==false){

                cout<<"\nAccount Not Found.\n";
            }
        }

        else if(choice==5){

            cout<<"\nThank You!\n";
        }

        else{

            cout<<"\nInvalid Choice.\n";
        }

    }while(choice!=5);

    return 0;
}