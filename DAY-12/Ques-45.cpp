#include<iostream>
using namespace std;
bool palindrome(int n){
    int rev=0,n1;
    if(n<0){
     return false;
    }
    n1=n;
    while(n>0){
        rev = 10*rev + n%10;
        n = n/10;
    }
    return n1==rev;
}

int main(){
    int n;
    cout << "Enter the number to check if palindrome or not " ;
    cin >> n;
    if (palindrome(n))
    cout << "Palindrome";
    else
    cout << "Not Palindrome";
    return 0;
}
