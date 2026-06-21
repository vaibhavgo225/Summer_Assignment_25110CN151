#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string input;
    int count=0;
    cout<< "Enter the sentence : ";
    getline(cin,input);

    for(int i=0;i<input.size();i++){
        if (input[i]==' '){
            count++;
        }
    }
    count++;

    cout << "The words in the sentence are : " << count;
    return 0;
}