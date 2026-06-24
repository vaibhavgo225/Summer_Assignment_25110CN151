#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string input;
    int count=0;
    cout<< "Enter the string : ";
    getline(cin,input);
    bool found= false;  
    for(int i=0;i<input.size();i++){
        char c=input[i];
        if(c >='A' && c<='Z'){
            c = c+32;
            input[i]=c;
        }
    }

    for(int i=0;i<input.size();i++){
        count =0;
        if(input[i] == ' ')
        continue;
        bool previous = false;
        for(int k=0;k<i;k++){
            if(input[i]==input[k]){
                previous=true;
            }
        }
        if(!previous){
        for ( int j=0;j<input.size();j++){
            if(input[i]==input[j]){
                count++;
            }
        }
        if(count==1){
         cout << "the first non repeating character is : " << input[i] << endl;
         found=true;
         break;
        }
    }
        
       
    }
    if(!found)
        cout << "Every character is repeating";
    return 0;
}