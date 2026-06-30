#include<iostream>
using namespace std;
int main(){
    int age;
    string country;
    cout<<"Enter your age to check voting eligibility in India : ";
    cin>>age;
    cin.ignore();
    cout<<"Enter the country of resident : ";
    getline(cin,country);
    if(age>18){
        if(country=="india"||country=="India"||country=="INDIA"){
            cout<<"You are Eligible";
        }
        else
        cout<<"You are not eligible";
    }
    else
    cout<<"You are not eligible";
    return 0;
}
