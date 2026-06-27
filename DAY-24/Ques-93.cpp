#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string input,rotation;
    int count=0,j;
    cout<< "Enter the string : ";
    getline(cin,input);
    cout<<"Enter the string to find if rotation : ";
    getline(cin,rotation);

    input = input+input;
    int ans =input.find(rotation);

    if(ans==string::npos)
    cout<< "not the rotation";
    else
    cout<<"Rotation";
    return 0;
}
