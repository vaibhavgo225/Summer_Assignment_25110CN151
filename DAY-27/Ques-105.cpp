#include<iostream>
using namespace std;

int main(){

    string name[50];
    int age[50];
    int roll[50];
    float marks[50];

    int students = 0;
    int choice;

    do{

        cout<<"\n====== STUDENT RECORD MANAGEMENT SYSTEM ======\n";
        cout<<"1. Add Student\n";
        cout<<"2. View All Students\n";
        cout<<"3. Search Student\n";
        cout<<"4. Delete Student\n";
        cout<<"5. Exit\n";
        cout<<"Enter your choice : ";
        cin>>choice;
        cin.ignore();

        if(choice==1){

            cout<<"\nEnter Student Name : ";
            getline(cin,name[students]);

            cout<<"Enter Roll Number : ";
            cin>>roll[students];

            cout<<"Enter Age : ";
            cin>>age[students];

            cout<<"Enter Marks : ";
            cin>>marks[students];

            students++;

            cout<<"\nStudent Added Successfully.\n";
        }

        else if(choice==2){

            if(students==0){
                cout<<"\nNo Records Found.\n";
            }
            else{

                cout<<"\n------ STUDENT RECORDS ------\n";

                for(int i=0;i<students;i++){
                    cout<<"\nStudent "<<i+1<<endl;
                    cout<<"Name : "<<name[i]<<endl;
                    cout<<"Roll Number : "<<roll[i]<<endl;
                    cout<<"Age : "<<age[i]<<endl;
                    cout<<"Marks : "<<marks[i]<<endl;
                }
            }
        }

        else if(choice==3){

            int searchRoll;
            bool found=false;

            cout<<"\nEnter Roll Number to Search : ";
            cin>>searchRoll;

            for(int i=0;i<students;i++){

                if(roll[i]==searchRoll){

                    cout<<"\nStudent Found\n";
                    cout<<"Name : "<<name[i]<<endl;
                    cout<<"Age : "<<age[i]<<endl;
                    cout<<"Marks : "<<marks[i]<<endl;

                    found=true;
                    break;
                }
            }

            if(found==false){
                cout<<"\nStudent Not Found.\n";
            }
        }

        else if(choice==4){

            int deleteRoll;
            bool found=false;

            cout<<"\nEnter Roll Number to Delete : ";
            cin>>deleteRoll;

            for(int i=0;i<students;i++){

                if(roll[i]==deleteRoll){

                    for(int j=i;j<students-1;j++){

                        name[j]=name[j+1];
                        roll[j]=roll[j+1];
                        age[j]=age[j+1];
                        marks[j]=marks[j+1];
                    }

                    students--;
                    found=true;

                    cout<<"\nRecord Deleted Successfully.\n";
                    break;
                }
            }

            if(found==false){
                cout<<"\nStudent Not Found.\n";
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