#include<iostream>
#include <cmath>
using namespace std;

bool armstrong(int n){
    int n1,ans=0,count=0;
    n1=n;
    while(n>0){
        count++;
        n /=10;
    }
    n=n1;
    while(n>0){
        ans += pow(n%10,count);
        n/=10;
    }
    if(n1==ans)
    return true;
    else
    return false;
}

int main(){
    int n;
    cout<<"Enter the number to check armstrong ";
    cin >> n;
    if (armstrong(n))
    cout << "armstrong";
    else
    cout << "Not armstrong";
    return 0;
}