#include<iostream>
using namespace std;
int main(){
    int arr[50],n;
    cout<< "Enter the number of elements ";
    cin>>n;
    
     for(int i=0;i<n;i++){
        cout << "Enter the " << i+1 << " number : ";
        cin >> arr[i];
   
    }
    cout << "array before reverse" << endl;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout <<endl << "Array after reverse : " << endl;
    int c;

    for(int i=0;i<=n/2;i++){
        c=arr[n-i-1];
        arr[n-i-1]=arr[i];
        arr[i]=c;
    }

    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

