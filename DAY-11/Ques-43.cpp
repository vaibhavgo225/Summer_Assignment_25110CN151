#include<iostream>
using namespace std;

void prime(int a){
    int count=0;
    for(int i = 2;i<=a/2;i++){
        if(a%i==0)
        count++;
    }
    if(count==0)
    cout << "The number is prime" << endl;
    else
    cout << "The number is not prime" << endl;

}

int main(){
    int n;
    cout << "Enter the number : ";
    cin >> n;
   prime(n);
    return 0;

}