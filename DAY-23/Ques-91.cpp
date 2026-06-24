#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string input , input1;
    int count=0,n,m;
    cout<< "Enter the string 1 : ";
    getline(cin,input);
     cout<< "Enter the string 2 : ";
    getline(cin,input1);

    n=input.size();
    m=input1.size();
    for(int i=0;i<n;i++){
        char c=input[i];
        if(c >='A' && c<='Z'){
            c = c+32;
            input[i]=c;
        }
    }
    for(int i=0;i<n;i++){
        if(input[i]==' '){
            for(int j=i+1;j<=n;j++){
        input[j-1]=input[j];
    }
    input.pop_back();
}
}
    for(int i=0;i<m;i++){
        char c=input1[i];
        if(c >='A' && c<='Z'){
            c = c+32;
            input1[i]=c;
        }
    }
    for(int i=0;i<m;i++){
        if(input1[i]==' '){
            for(int j=i+1;j<=m;j++){
        input1[j-1]=input1[j];
    }
     input.pop_back();
}
}    

    sort(input.begin(),input.end());
    sort(input1.begin(),input1.end());

    if(input1==input)   
    cout<< "The strings are anagram";
    else
    cout<< "The strings are not anagram";
}