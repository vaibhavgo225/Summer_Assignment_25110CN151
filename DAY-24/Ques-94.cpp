#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string input;
    int count=0,j;
    cout<< "Enter the string : ";
    getline(cin,input);
    string compressed = "";

    for(int i=0;i<input.size();i=i+count){
        count=1;
        for(int j=i+1;j<input.size();j++){
        if(input[i]==input[j])
            count++;
            else
            break;
        }
        compressed += input[i];
            compressed += to_string(count);
    }
    cout << "compressed string is : " << compressed;
    return 0;
}