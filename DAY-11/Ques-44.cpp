#include<iostream>
using namespace std;
unsigned long long factorial(int n){
    int i;
    unsigned long long fact=1;
    for(i=1;i<=n;i++){
        fact = fact*i;
    }
return fact;
}

int main(){
    int n;
    cout << "Enter the number to calculate factorial : ";
    cin >> n;

    cout << "The factorial of " << n << " is " << factorial(n);
    return 0;

}
