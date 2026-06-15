//Selection sort
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
    int c,SmallestInd;
    for(int i=0;i<n;i++){
        SmallestInd =i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[SmallestInd])
            SmallestInd=arr[j];
        }

        c=arr[SmallestInd];
        arr[SmallestInd]=arr[i];
        arr[i]=c;
    }
      cout << "The sorted array is : " << endl;
     for (int i=0;i<n;i++){
        cout << arr[i] << " ";
     }
}