#include<iostream>
using namespace std;

void inputarray(int n){
    int i,arr[50];
    for(i=1;i<=n;i++){
        cout << "Enter the element ["<<i<<"] ";
        cin >> arr[i-1];
    }
    cout << "The array is [ ";
    for(i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << "]";
}

int main(){
    int n;
    cout << "Enter the number of elements to store in array : ";
    cin >> n;

    inputarray(n);
    return 0;
}