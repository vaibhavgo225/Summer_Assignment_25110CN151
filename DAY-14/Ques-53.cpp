#include<iostream>
using namespace std;
int main(){
    int arr[50],n,target,found=0;
    cout<< "Enter the number of elements ";
    cin>>n;
    cout << "Enter the target ";
    cin >> target;

     for(int i=0;i<n;i++){
        cout << "Enter the " << i+1 << " number : ";
        cin >> arr[i];
    }
    for (int i=0;i<n;i++){
        if(arr[i]==target){
        cout<<"The target is present at arr["<<i<<"] and is ["<<i+1<<"]th element of array";
        found++;
        }
    }
    if(found==0)
    cout << "The target element is not present";

   return 0;
}


 