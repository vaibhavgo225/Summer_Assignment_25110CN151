#include<iostream>
using namespace std;

struct Account{
    string account_holderName;
    long long accountNumber;
    int pin;
    int balance=0;
};

int main(){
    int option,language;
    int pin,attempt=0;
    Account acc;
    cout<<endl<<endl<<endl;
    cout<<"==================WELCOME TO GOSWAMI BANK=====================" << endl<<endl<<endl;

    cout << "Enter Account Holder Name: ";
    getline(cin, acc.account_holderName);

    cout << "Enter Account Number: ";
    cin >> acc.accountNumber;

    cout << "Set a 4-digit PIN: ";
    cin >> acc.pin;
    cout<<"Press 1 : For English"<<endl;
    cout<<"Press 2 : For Hindi"<<endl;
    cout<<"Enter your Option : ";
    cin>>language;
    if(language==1){
        do{
            if(attempt>=3){
                cout<<"Out of pin limit. Try after 24 hours";
                return 0;
            }
            else{
            cout<<"Enter PIN : ";
            cin>>pin;
            attempt++;
            }
        }
        while(pin!=acc.pin);
        int deposit,withdraw;
        do{
        cout<<"=========MENU========="<<endl;
        cout<<"Press 1 : Check Balance"<<endl;
        cout<< "Press 2 : Deposit money"<<endl;
        cout<<"Press 3 : Withdraw money"<<endl;
        cout<<"Press 4 : Exit"<<endl;
        cout<<"Enter your Choice : ";
        cin>>option;
            
        switch(option){
            case 1 :  cout<<endl<<"The Current Balance is : " << acc.balance<<endl<<endl;
                        break;
            case 2 : cout<<"Enter the amount of money to be deposited : ";
                     cin>>deposit;
                     if(deposit<=0){
                        cout<<"Enter te valid amount"<<endl<<endl;
                     }
                     else{
                     acc.balance=acc.balance+deposit;
                     cout<<"The amount is Successfully Deposited"<<endl;
                     cout<<"The current balance is : "<< acc.balance<<endl<<endl;
                     }
                     break;
            case 3 : cout<<"Enter the amount of money to be Withdrawn : ";
                     cin>>withdraw;
                     if(withdraw<=0){
                        cout<<"Enter the valid amount"<<endl<<endl;
                     }
                     else if(withdraw>acc.balance){
                        cout<<"Insuffiecient amount"<<endl<<endl;
                     }
                     else{
                     acc.balance=acc.balance-withdraw;
                     cout<<"The amount is Successfully Withdrawn"<<endl<<"The current balance is : "<< acc.balance<<endl<<"Collect your cash from the machine"<<endl<<endl;
                     }
                     break;
            case 4 :  cout<<"Thank you for visiting";  
            break;
            default : cout<<"Choose from the available options"<<endl<<endl;
        }
        }
        while(option!=4);

    }
    if(language == 2){
        do{
    if(attempt>=3){
        cout<<"PIN ki seema samaapt ho gayi hai. Kripya 24 ghante baad phir prayas karein.";
        return 0;
    }
    else{
        cout<<"PIN darj karein : ";
        cin>>pin;
        attempt++;
    }
}
while(pin!=acc.pin);

int deposit, withdraw;

do{
    cout<<"=========MENU========="<<endl;
    cout<<"1 dabaiye : Balance dekhne ke liye"<<endl;
    cout<<"2 dabaiye : Paise jama karne ke liye"<<endl;
    cout<<"3 dabaiye : Paise nikalne ke liye"<<endl;
    cout<<"4 dabaiye : Bahar nikalne ke liye"<<endl<<endl;
    cout<<"Apna Uttar darja kare : ";
    cin>>option;

    switch(option){

        case 1:
            cout<<"Aapka vartamaan rashi hai : "<<acc.balance<<endl<<endl<<endl;
            break;

        case 2:
            cout<<"Jama karne ki rashi darj karein : ";
            cin>>deposit;

            if(deposit<=0){
                cout<<"Kripya sahi rashi darj karein."<<endl<<endl;
            }
            else{
                acc.balance = acc.balance + deposit;
                cout<<"Rashi safaltaapoorvak jama ho gayi hai."<<endl<<endl;
                cout<<"Aapka vartamaan rashi hai : "<<acc.balance<<endl<<endl<<endl;
            }
            break;

        case 3:
            cout<<"Nikalne ki rashi darj karein : ";
            cin>>withdraw;

            if(withdraw<=0){
                cout<<"Kripya sahi rashi darj karein."<<endl<<endl<<endl;
            }
            else if(withdraw>acc.balance){
                cout<<"Aapke khate mein paryapt rashi uplabdh nahi hai."<<endl<<endl;
            }
            else{
                acc.balance = acc.balance - withdraw;
                cout<<"Rashi safaltaapoorvak nikaal li gayi hai."<<endl<<endl;
                cout<<"Aapka vartamaan dhanrashi hai : "<<acc.balance<<endl<<endl;
                cout<<"Kripya apne paise machine se le lijiye."<<endl<<endl;
            }
            break;

        case 4:
            cout<<"Goswami Bank mein aane ke liye dhanyavaad."<<endl;
            break;

        default:
            cout<<"Kripya diye gaye vikalpon mein se hi chayan karein."<<endl<<endl;
    }

}
while(option!=4);
    }
    return 0;
}