#include<iostream>
using namespace std;
int main(){
    int arr[50],n,count=0;
    cout<< "Enter the number of elements ";
    cin>>n;
    
     for(int i=0;i<n;i++){
        cout << "Enter the " << i+1 << " number : ";
        cin >> arr[i];
    }
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!= 0){
                arr[j]=arr[i];
                j++;
        }
        else
        count++;
    }
    for(int i=n-count;i<n;i++){
        arr[i] = 0;
    }

    cout << "Array after moving zeros to the end:\n";

        for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

