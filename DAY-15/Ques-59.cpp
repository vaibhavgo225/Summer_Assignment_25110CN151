#include<iostream>
using namespace std;

int main(){
    int arr[50], arr2[50], n, right;
    cout << "Enter the number of elements ";
    cin >> n;
    for(int i=0; i<n; i++){
        cout << "Enter the " << i+1 << " number : ";
        cin >> arr[i];
    }
    cout << "Enter the number of right shifts : ";
    cin >> right;

    right = right % n;

    for(int i=0; i<right; i++){
        arr2[i] = arr[n-right+i];
    }

    for(int i=n-right-1; i>=0;i--){
        arr[i+right] = arr[i];
    }

    for(int i=0; i<right;i++){
        arr[i] = arr2[i];
    }

    for(int i=0; i<n;i++){
        cout << arr[i] << " ";
    }
}