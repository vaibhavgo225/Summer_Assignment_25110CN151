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
    int max =arr[0];
   for(int i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
   }
   int max2 =arr[0];
   for(int i = 1; i < n-1; i++){
    if(arr[i] > max2 && arr[i]!=max)
            max2 = arr[i];
   }
   cout<< "The 2nd maximum element is "<<max2<<" ";

   return 0;
}