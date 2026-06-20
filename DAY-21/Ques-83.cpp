#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string input;
    cout<< "Enter the string : ";
    getline(cin,input);
    int count=0,cons=0;
    for(int i=0;i<input.size();i++){
        char ch = input[i];

        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        if(input[i]=='a' ||input[i]=='e' ||input[i]=='i' ||input[i]=='o' ||input[i]=='u' ||
            input[i]=='A' ||input[i]=='E' ||input[i]=='I' ||input[i]=='O' ||input[i]=='U'){
                count++;
            }   
        else
        cons++;
        }
    }
   
    cout<< "The vovels are : " << count << endl;
    cout<< "The consonents are : " << cons ;
}