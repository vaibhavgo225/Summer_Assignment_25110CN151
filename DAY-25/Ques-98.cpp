#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string input , input1;
    cout<< "Enter the string 1 : ";
    getline(cin,input);
     cout<< "Enter the string 2 : ";
    getline(cin,input1);

    cout<< "The common characters are : " << endl;
    sort(input.begin(),input.end());
    sort(input1.begin(),input1.end());
    bool found=false;
    for(int i=0;i<input.size();i++){
        for(int j=0;j<input1.size();j++){
            if(input[i]==input1[j]){
                cout<<input[i];
                found=true;
                break;
            }
        }
    }
    if(!found){
        cout<< "No common character";
    }
}