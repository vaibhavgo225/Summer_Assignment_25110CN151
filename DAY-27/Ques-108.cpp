#include<iostream>
using namespace std;

int main(){

    string name[50];
    int roll[50];
    float marks[50][5];
    float total[50];
    float percentage[50];
    char grade[50];

    int students = 0;
    int choice;

    do{

        cout<<"\n====== MARKSHEET GENERATION SYSTEM ======\n";
        cout<<"1. Add Student Record\n";
        cout<<"2. View All Marksheets\n";
        cout<<"3. Search Student\n";
        cout<<"4. Delete Student Record\n";
        cout<<"5. Exit\n";
        cout<<"Enter your choice : ";
        cin>>choice;
        cin.ignore();

        if(choice==1){

            cout<<"\nEnter Student Name : ";
            getline(cin,name[students]);

            cout<<"Enter Roll Number : ";
            cin>>roll[students];

            total[students]=0;

            for(int i=0;i<5;i++){

                cout<<"Enter Marks of Subject "<<i+1<<" : ";
                cin>>marks[students][i];

                total[students]+=marks[students][i];
            }

            percentage[students]=total[students]/5;

            if(percentage[students]>=90)
                grade[students]='A';
            else if(percentage[students]>=75)
                grade[students]='B';
            else if(percentage[students]>=60)
                grade[students]='C';
            else if(percentage[students]>=40)
                grade[students]='D';
            else
                grade[students]='F';

            students++;

            cout<<"\nMarksheet Generated Successfully.\n";
        }

        else if(choice==2){

            if(students==0){

                cout<<"\nNo Records Found.\n";
            }

            else{

                cout<<"\n------ STUDENT MARKSHEETS ------\n";

                for(int i=0;i<students;i++){

                    cout<<"\nStudent "<<i+1<<endl;
                    cout<<"Name : "<<name[i]<<endl;
                    cout<<"Roll Number : "<<roll[i]<<endl;

                    for(int j=0;j<5;j++){

                        cout<<"Subject "<<j+1<<" : "<<marks[i][j]<<endl;
                    }

                    cout<<"Total : "<<total[i]<<"/500"<<endl;
                    cout<<"Percentage : "<<percentage[i]<<"%"<<endl;
                    cout<<"Grade : "<<grade[i]<<endl;

                    if(grade[i]=='F')
                        cout<<"Result : Fail"<<endl;
                    else
                        cout<<"Result : Pass"<<endl;
                }
            }
        }

        else if(choice==3){

            int searchRoll;
            bool found=false;

            cout<<"\nEnter Roll Number : ";
            cin>>searchRoll;

            for(int i=0;i<students;i++){

                if(roll[i]==searchRoll){

                    cout<<"\nStudent Found\n";
                    cout<<"Name : "<<name[i]<<endl;
                    cout<<"Percentage : "<<percentage[i]<<"%"<<endl;
                    cout<<"Grade : "<<grade[i]<<endl;

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

            cout<<"\nEnter Roll Number : ";
            cin>>deleteRoll;

            for(int i=0;i<students;i++){

                if(roll[i]==deleteRoll){

                    for(int j=i;j<students-1;j++){

                        name[j]=name[j+1];
                        roll[j]=roll[j+1];
                        total[j]=total[j+1];
                        percentage[j]=percentage[j+1];
                        grade[j]=grade[j+1];

                        for(int k=0;k<5;k++){

                            marks[j][k]=marks[j+1][k];
                        }
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