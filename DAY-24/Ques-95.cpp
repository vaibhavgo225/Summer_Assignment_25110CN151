#include<iostream>
#include<sstream>
using namespace std;

int main(){
    string input,longest,word;
    int count=0,j;
    cout<< "Enter the string : ";
    getline(cin,input);
    stringstream ss(input);
    while(ss>>word){
        if(word.size()>longest.size())
        longest=word;
    }
    cout<<"The longest word in the sentence is : "<< longest;
    return 0;
}