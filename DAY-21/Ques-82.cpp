#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string input;
    cout<< "Enter the string : ";
    getline(cin,input);

    reverse(input.begin(),input.end());

    cout << "The reversed string is : " << input;
    return 0;
}