#include<iostream>
#include<algorithm>
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
    sort(input.begin(),input.end());

    int count =1,maxfreq=1;
    char mostfrequent = input[0];
    for(int i=0;i<input.size();i++){
        count=1;
        if(input[i]==input[i-1]){
            count++;
        }
        if(count>maxfreq){
            maxfreq=count;
            mostfrequent=input[i];
        }
    }
    cout<< "The most frequent element is '" << mostfrequent <<"' with frequency of : " << maxfreq;
    return 0;
}