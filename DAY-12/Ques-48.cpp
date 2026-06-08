#include<iostream>
using namespace std;

bool perfect(int n){
    int i,sum=0;
    for(i=1;i<=n/2;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    return n==sum;
}

int main(){
    int n;
    cout << "Enter the number to check if it is perfect : ";
    cin >> n;
    if (perfect(n))
    cout << "Perfect number";
    else
    cout << "Not a perfect number";
    return 0;
}