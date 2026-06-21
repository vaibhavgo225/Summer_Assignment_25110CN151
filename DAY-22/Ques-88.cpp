#include<iostream>
using namespace std;

int main(){
    string input;
    cout<< "Enter the string : ";
    getline(cin,input);
    int n=input.size();
    for(int i=0;i<n;i++){
        if(input[i]==' '){
            for(int j=i+1;j<=n;j++){
        input[j-1]=input[j];
       
    }
     input.pop_back();
}
    
}
cout << input;
}