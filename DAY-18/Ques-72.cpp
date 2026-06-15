//Bubble Sorting desending
#include<iostream>
using namespace std;
int main(){
    int arr[50],n;
    cout<< "Enter the number of elements in array ";
    cin>>n;
    
     for(int  i=0;i<n;i++){
        cout << "Enter the " << i+1 << " number : ";
        cin >> arr[i];
    }
    int c;

    for(int j=0;j<n;j++){

    for(int i=0;i<n-1;i++){
            if(arr[i]<arr[i+1]){
            c=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=c;
            }
            else
            continue;
        }
        }
         cout << "The sorted array is : " << endl;
     for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}
