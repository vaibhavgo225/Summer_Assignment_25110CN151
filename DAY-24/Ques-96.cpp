#include<iostream>
using namespace std;

int main(){
    string input;
    cout<< "Enter the string : ";
    getline(cin,input);

    for(int i=0;i<input.size();i++){
        char c=input[i];
        if(c >='A' && c<='Z'){
            c = c+32;
            input[i]=c;
        }
    }

    for(int i=0;i<input.size();i++){
        for(int j=i+1;j<input.size();j++){
            if(input[i]==input[j]){
                input[j]=input[j+1];
            }
        }
    }
    cout<<input;
    return 0;
}