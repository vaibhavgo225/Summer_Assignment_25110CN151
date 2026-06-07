#include<iostream>
using namespace std;

int sum(int a, int b){
    int totalsum = a + b;
    return totalsum;
}

int main(){
    int a , b;
    cout << "Enter the value of a : ";
    cin >> a;
    cout << "Enter the value of b : ";
    cin >> b;
    cout << "The sum of " << a << " and " << b << " is : " << sum(a,b) << endl;
}