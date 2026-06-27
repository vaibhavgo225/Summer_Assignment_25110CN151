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
         bool previous = false;
        for(int k=0;k<i;k++){
            if(input[i]==input[k]){
                previous=true;
            }
        }
        if(!previous){
            for(int j=i+1;j<input.size();j++){
                if(input[i]==input[j]){
                    count++;
                }
        }
        }
        if(count>maxfreq){
            maxfreq=count;
            mostfrequent=input[i];
        }
    }
    cout<< "The most frequent element is '" << mostfrequent <<"' with frequency of : " << maxfreq;
    return 0;
}