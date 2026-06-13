#include<iostream>
using namespace std;
int main(){
    int arr[50],arr2[50],n,m;
    cout<< "Enter the number of elements in array 1 ";
    cin>>n;
    
     for(int  i=0;i<n;i++){
        cout << "Enter the " << i+1 << " number : ";
        cin >> arr[i];
   
    }
    cout<< "Enter the number of elements in array 2 ";
    cin>>m;
    
    for(int j=0;j<m;j++){
        cout << "Enter the " << j+1 << " number : ";
        cin >> arr2[j];
    }
    int j=0;
    for(int i=n;i<n+m;i++){
            arr[i]=arr2[j];
            j++;
        }
    cout << "The merged array is : " << endl;
     for (int i=0;i<n+m;i++){
        cout << arr[i] << " ";
    }
}
