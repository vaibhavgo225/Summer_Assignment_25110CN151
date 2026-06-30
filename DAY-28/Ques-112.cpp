#include<iostream>
using namespace std;

int main(){

    string name[50];
    string phone[50];
    string email[50];

    int contacts = 0;
    int choice;

    do{

        cout<<"\n====== CONTACT MANAGEMENT SYSTEM ======\n";
        cout<<"1. Add Contact\n";
        cout<<"2. View Contacts\n";
        cout<<"3. Search Contact\n";
        cout<<"4. Delete Contact\n";
        cout<<"5. Exit\n";
        cout<<"Enter your choice : ";
        cin>>choice;
        cin.ignore();

        if(choice==1){

            cout<<"\nEnter Contact Name : ";
            getline(cin,name[contacts]);

            cout<<"Enter Phone Number : ";
            getline(cin,phone[contacts]);

            cout<<"Enter Email : ";
            getline(cin,email[contacts]);

            contacts++;

            cout<<"\nContact Added Successfully.\n";
        }

        else if(choice==2){

            if(contacts==0){

                cout<<"\nNo Contacts Found.\n";
            }

            else{

                cout<<"\n------ CONTACT LIST ------\n";

                for(int i=0;i<contacts;i++){

                    cout<<"\nContact "<<i+1<<endl;
                    cout<<"Name : "<<name[i]<<endl;
                    cout<<"Phone : "<<phone[i]<<endl;
                    cout<<"Email : "<<email[i]<<endl;
                }
            }
        }

        else if(choice==3){

            string searchName;
            bool found = false;

            cout<<"\nEnter Contact Name : ";
            getline(cin,searchName);

            for(int i=0;i<contacts;i++){

                if(name[i]==searchName){

                    cout<<"\nContact Found\n";
                    cout<<"Name : "<<name[i]<<endl;
                    cout<<"Phone : "<<phone[i]<<endl;
                    cout<<"Email : "<<email[i]<<endl;

                    found = true;
                    break;
                }
            }

            if(found==false){

                cout<<"\nContact Not Found.\n";
            }
        }

        else if(choice==4){

            string deleteName;
            bool found = false;

            cout<<"\nEnter Contact Name : ";
            getline(cin,deleteName);

            for(int i=0;i<contacts;i++){

                if(name[i]==deleteName){

                    for(int j=i;j<contacts-1;j++){

                        name[j]=name[j+1];
                        phone[j]=phone[j+1];
                        email[j]=email[j+1];
                    }

                    contacts--;

                    found = true;

                    cout<<"\nContact Deleted Successfully.\n";
                    break;
                }
            }

            if(found==false){

                cout<<"\nContact Not Found.\n";
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