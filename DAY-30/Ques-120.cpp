//EMI calculator and loan management system

#include<iostream>
#include<cmath>
using namespace std;

int main(){

    string name[50];
    int loanID[50];
    float loanAmount[50],interestRate[50],years[50],emi[50];

    int loans=0;
    int choice;

    do{

        cout<<"\n====== EMI CALCULATOR SYSTEM ======\n";
        cout<<"1. Add Loan\n";
        cout<<"2. View Loans\n";
        cout<<"3. Search Loan\n";
        cout<<"4. Delete Loan\n";
        cout<<"5. Exit\n";
        cout<<"Enter your choice : ";
        cin>>choice;
        cin.ignore();

        if(choice==1){

            cout<<"\nEnter Customer Name : ";
            getline(cin,name[loans]);

            cout<<"Enter Loan ID : ";
            cin>>loanID[loans];

            cout<<"Enter Loan Amount : ";
            cin>>loanAmount[loans];

            cout<<"Enter Annual Interest Rate (%) : ";
            cin>>interestRate[loans];

            cout<<"Enter Loan Duration (Years) : ";
            cin>>years[loans];

            float r=interestRate[loans]/12/100;
            int n=years[loans]*12;

            emi[loans]=(loanAmount[loans]*r*pow(1+r,n))/(pow(1+r,n)-1);

            loans++;

            cout<<"\nLoan Added Successfully.\n";
        }

        else if(choice==2){

            if(loans==0){

                cout<<"\nNo Records Found.\n";
            }

            else{

                cout<<"\n------ LOAN RECORDS ------\n";

                for(int i=0;i<loans;i++){

                    cout<<"\nCustomer "<<i+1<<endl;
                    cout<<"Name : "<<name[i]<<endl;
                    cout<<"Loan ID : "<<loanID[i]<<endl;
                    cout<<"Loan Amount : "<<loanAmount[i]<<endl;
                    cout<<"Interest Rate : "<<interestRate[i]<<"%"<<endl;
                    cout<<"Duration : "<<years[i]<<" Years"<<endl;
                    cout<<"Monthly EMI : "<<emi[i]<<endl;
                }
            }
        }

        else if(choice==3){

            int searchID;
            bool found=false;

            cout<<"\nEnter Loan ID : ";
            cin>>searchID;

            for(int i=0;i<loans;i++){

                if(loanID[i]==searchID){

                    cout<<"\nLoan Found\n";
                    cout<<"Customer : "<<name[i]<<endl;
                    cout<<"Loan Amount : "<<loanAmount[i]<<endl;
                    cout<<"Monthly EMI : "<<emi[i]<<endl;

                    found=true;
                    break;
                }
            }

            if(found==false){

                cout<<"\nLoan Not Found.\n";
            }
        }

        else if(choice==4){

            int deleteID;
            bool found=false;

            cout<<"\nEnter Loan ID : ";
            cin>>deleteID;

            for(int i=0;i<loans;i++){

                if(loanID[i]==deleteID){

                    for(int j=i;j<loans-1;j++){

                        name[j]=name[j+1];
                        loanID[j]=loanID[j+1];
                        loanAmount[j]=loanAmount[j+1];
                        interestRate[j]=interestRate[j+1];
                        years[j]=years[j+1];
                        emi[j]=emi[j+1];
                    }

                    loans--;

                    found=true;

                    cout<<"\nLoan Record Deleted Successfully.\n";
                    break;
                }
            }

            if(found==false){

                cout<<"\nLoan Not Found.\n";
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