#include<iostream>
using namespace std;

int main(){

    string title[50], author[50];
    int bookID[50];

    int books = 0;
    int choice;

    do{

        cout<<"\n====== LIBRARY MANAGEMENT SYSTEM ======\n";
        cout<<"1. Add Book\n";
        cout<<"2. View Books\n";
        cout<<"3. Search Book\n";
        cout<<"4. Exit\n";
        cout<<"Enter your choice : ";
        cin>>choice;
        cin.ignore();

        if(choice==1){

            cout<<"\nEnter Book Title : ";
            getline(cin,title[books]);

            cout<<"Enter Author Name : ";
            getline(cin,author[books]);

            cout<<"Enter Book ID : ";
            cin>>bookID[books];

            books++;

            cout<<"\nBook Added Successfully.\n";
        }

        else if(choice==2){

            if(books==0){

                cout<<"\nNo Books Available.\n";
            }

            else{

                cout<<"\n------ BOOK LIST ------\n";

                for(int i=0;i<books;i++){

                    cout<<"\nBook "<<i+1<<endl;
                    cout<<"Book ID : "<<bookID[i]<<endl;
                    cout<<"Title : "<<title[i]<<endl;
                    cout<<"Author : "<<author[i]<<endl;
                }
            }
        }

        else if(choice==3){

            int searchID;
            bool found = false;

            cout<<"\nEnter Book ID : ";
            cin>>searchID;

            for(int i=0;i<books;i++){

                if(bookID[i]==searchID){

                    cout<<"\nBook Found\n";
                    cout<<"Title : "<<title[i]<<endl;
                    cout<<"Author : "<<author[i]<<endl;

                    found = true;
                    break;
                }
            }

            if(found==false){

                cout<<"\nBook Not Found.\n";
            }
        }

        else if(choice==4){

            cout<<"\nThank You!\n";
        }

        else{

            cout<<"\nInvalid Choice.\n";
        }

    }while(choice!=4);

    return 0;
}