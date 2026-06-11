#include<iostream>
using namespace std;
int main(){
    int arr[50],arr2[50],n,left;
    cout<< "Enter the number of elements ";
    cin>>n;
    
     for(int i=0;i<n;i++){
        cout << "Enter the " << i+1 << " number : ";
        cin >> arr[i];
   
    }
    cout << "Enter the number of left shifts : ";
    cin >> left;

    //the below (left=left%n) is done for rotation if user inputs value>n

    left = left %n;

    // storing the starting (left) elements in another array
    for(int i=0;i<left;i++){
        arr2[i]=arr[i];
    }

    //shifting the remaining array to left by left(value) positions;
    for(int i=0;i<n-left;i++){
        arr[i]=arr[left+i];
    }

    //overwritting the last remaining elements
    for(int i=0;i<left;i++){
        arr[n+i-left]=arr2[i];
    }
    
    //printing the rotated array
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}