#include<iostream>
using namespace std;
int main(){
    int arr[50],n,target;
    cout<< "Enter the number of elements ";
    cin>>n;
    
     for(int i=0;i<n;i++){
        cout << "Enter the " << i+1 << " number : ";
        cin >> arr[i];
      }
      cout << "Enter the sum";
      cin >> target;

      for(int i=0;i<n;i++){
        for(int j=1;j<n;j++)
        if(arr[i]+arr[j]==target){
            cout << "arr["<< i << "] + " << "arr["<<j << "] = " << target << endl;
        }

      }
}