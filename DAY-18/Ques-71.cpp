//Binary search
#include<iostream>
using namespace std;
int main(){
    int arr[50],n,target;
    cout<< "Enter the number of elements in array ";
    cin>>n;
    
     for(int  i=0;i<n;i++){
        cout << "Enter the " << i+1 << " number : ";
        cin >> arr[i];
    }
    cout<< "Enter the key element : ";
    cin>>target;
    int c;

    for(int j=0;j<n;j++){

    for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
            c=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=c;
            }
            else
            continue;
        }
        }
int low = 0;
int high = n - 1;

while(low <= high){
    int mid = (low + high) / 2;

    if(arr[mid] == target){
        cout << "Element found at index " << mid<< "After the array is sorted";
        return 0;
    }
    else if(target < arr[mid]){
        high = mid - 1;
    }
    else{
        low = mid + 1; 
    }
}
}


