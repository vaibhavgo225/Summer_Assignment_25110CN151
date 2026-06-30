#include<iostream>
using namespace std;

int main(){

    string name[50];
    int id[50];
    int age[50];
    float salary[50];

    int employees = 0;
    int choice;

    do{

        cout<<"\n====== EMPLOYEE MANAGEMENT SYSTEM ======\n";
        cout<<"1. Add Employee\n";
        cout<<"2. View All Employees\n";
        cout<<"3. Search Employee\n";
        cout<<"4. Delete Employee\n";
        cout<<"5. Exit\n";
        cout<<"Enter your choice : ";
        cin>>choice;
        cin.ignore();

        if(choice==1){

            cout<<"\nEnter Employee Name : ";
            getline(cin,name[employees]);

            cout<<"Enter Employee ID : ";
            cin>>id[employees];

            cout<<"Enter Age : ";
            cin>>age[employees];

            cout<<"Enter Salary : ";
            cin>>salary[employees];

            employees++;

            cout<<"\nEmployee Added Successfully.\n";
        }

        else if(choice==2){

            if(employees==0){
                cout<<"\nNo Records Found.\n";
            }
            else{

                cout<<"\n------ EMPLOYEE RECORDS ------\n";

                for(int i=0;i<employees;i++){

                    cout<<"\nEmployee "<<i+1<<endl;
                    cout<<"Name : "<<name[i]<<endl;
                    cout<<"Employee ID : "<<id[i]<<endl;
                    cout<<"Age : "<<age[i]<<endl;
                    cout<<"Salary : "<<salary[i]<<endl;
                }
            }
        }

        else if(choice==3){

            int searchID;
            bool found = false;

            cout<<"\nEnter Employee ID to Search : ";
            cin>>searchID;

            for(int i=0;i<employees;i++){

                if(id[i]==searchID){

                    cout<<"\nEmployee Found\n";
                    cout<<"Name : "<<name[i]<<endl;
                    cout<<"Age : "<<age[i]<<endl;
                    cout<<"Salary : "<<salary[i]<<endl;

                    found = true;
                    break;
                }
            }

            if(found==false){
                cout<<"\nEmployee Not Found.\n";
            }
        }

        else if(choice==4){

            int deleteID;
            bool found = false;

            cout<<"\nEnter Employee ID to Delete : ";
            cin>>deleteID;

            for(int i=0;i<employees;i++){

                if(id[i]==deleteID){

                    for(int j=i;j<employees-1;j++){

                        name[j] = name[j+1];
                        id[j] = id[j+1];
                        age[j] = age[j+1];
                        salary[j] = salary[j+1];
                    }

                    employees--;

                    found = true;

                    cout<<"\nEmployee Record Deleted Successfully.\n";
                    break;
                }
            }

            if(found==false){
                cout<<"\nEmployee Not Found.\n";
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