#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string input , input1;
    cout<< "Enter the string 1 : ";
    getline(cin,input);
     cout<< "Enter the string 2 : ";
    getline(cin,input1);

    sort(input.begin(),input.end());
    sort(input1.begin(),input1.end());

    input = input.append(input1);
    cout << input;
    return 0;
}