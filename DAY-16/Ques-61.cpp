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
    // Printing the array
    cout << "The array is ";
    for (int i=0;i<n-1;i++){
        cout << arr[i] << " ";
    }

    cout << "and " << " : ";
    //Checking the missing number
    for(int i=0;i<n-1;i++){
        if(arr[i+1] == arr[i] +1){
            continue;
        }
        cout << "The missing number is " << arr[i] + 1 << endl;
        
    }
        
}
