#include<iostream>
using namespace std;

/*This code is to compare maximum of atmost 15 numbers to increase the comparison limit update
the array input in function */
int maximum(){
    int n , arr[15];
    cout << "Enter the total numbers to compare : ";
    cin >> n;
    for(int i=1;i<=n;i++){
        cout << "Enter the " << i << "number : ";
        cin >> arr[i-1];
    }
    for(int i=1;i<=n;i++){
        if(arr[i-1]>arr[i])
        arr[i]=arr[i-1];
    }
    cout << "The maximum number is : ";
    return arr[n-1];
}

int main(){

    cout << maximum() << endl;
    return 0;
}