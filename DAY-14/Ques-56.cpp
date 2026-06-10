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
    for(int i=0;i<n;i++){
        int count =1;
        bool alreadyCounted = false;


        /* The following loop checks if the current element
            has already been counted. If yes, continue skips
            the remaining code in this iteration and the loop
            proceeds with the next value of i. */


        for(int k = 0; k < i; k++) {
            if(arr[i] == arr[k]) {
                alreadyCounted = true;
                break;
            }
        }
        if(alreadyCounted)
            continue;
         
            // This loop counts how many times element
            // appears after its first occurrence.


        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>1)
            cout << "The "<<arr[i]<<" is duplicated "<<count<<" times " << endl;
    }
    return 0;
}