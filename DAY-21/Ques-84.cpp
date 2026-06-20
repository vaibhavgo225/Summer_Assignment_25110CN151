#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string input;
    cout<< "Enter the string : ";
    getline(cin,input);

    for(int i=0;i<input.size();i++){
        char c=input[i];
        if(c >='a' && c<='z'){
            c = c-32;
            input[i]=c;
        }
    }
    cout << input;

}