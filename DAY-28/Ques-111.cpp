#include<iostream>
using namespace std;

int main(){

    string name[50];
    string destination[50];
    int ticketID[50];
    int tickets[50];

    int bookings = 0;
    int choice;

    do{

        cout<<"\n====== TICKET BOOKING SYSTEM ======\n";
        cout<<"1. Book Ticket\n";
        cout<<"2. View Bookings\n";
        cout<<"3. Search Booking\n";
        cout<<"4. Cancel Booking\n";
        cout<<"5. Exit\n";
        cout<<"Enter your choice : ";
        cin>>choice;
        cin.ignore();

        if(choice==1){

            cout<<"\nEnter Customer Name : ";
            getline(cin,name[bookings]);

            cout<<"Enter Ticket ID : ";
            cin>>ticketID[bookings];
            cin.ignore();

            cout<<"Enter Destination : ";
            getline(cin,destination[bookings]);

            cout<<"Enter Number of Tickets : ";
            cin>>tickets[bookings];

            bookings++;

            cout<<"\nTicket Booked Successfully.\n";
        }

        else if(choice==2){

            if(bookings==0){

                cout<<"\nNo Bookings Found.\n";
            }

            else{

                cout<<"\n------ BOOKING DETAILS ------\n";

                for(int i=0;i<bookings;i++){

                    cout<<"\nBooking "<<i+1<<endl;
                    cout<<"Customer Name : "<<name[i]<<endl;
                    cout<<"Ticket ID : "<<ticketID[i]<<endl;
                    cout<<"Destination : "<<destination[i]<<endl;
                    cout<<"Number of Tickets : "<<tickets[i]<<endl;
                }
            }
        }

        else if(choice==3){

            int searchID;
            bool found = false;

            cout<<"\nEnter Ticket ID : ";
            cin>>searchID;

            for(int i=0;i<bookings;i++){

                if(ticketID[i]==searchID){

                    cout<<"\nBooking Found\n";
                    cout<<"Customer Name : "<<name[i]<<endl;
                    cout<<"Destination : "<<destination[i]<<endl;
                    cout<<"Number of Tickets : "<<tickets[i]<<endl;

                    found = true;
                    break;
                }
            }

            if(found==false){

                cout<<"\nBooking Not Found.\n";
            }
        }

        else if(choice==4){

            int cancelID;
            bool found = false;

            cout<<"\nEnter Ticket ID : ";
            cin>>cancelID;

            for(int i=0;i<bookings;i++){

                if(ticketID[i]==cancelID){

                    for(int j=i;j<bookings-1;j++){

                        name[j]=name[j+1];
                        destination[j]=destination[j+1];
                        ticketID[j]=ticketID[j+1];
                        tickets[j]=tickets[j+1];
                    }

                    bookings--;

                    found = true;

                    cout<<"\nBooking Cancelled Successfully.\n";
                    break;
                }
            }

            if(found==false){

                cout<<"\nBooking Not Found.\n";
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