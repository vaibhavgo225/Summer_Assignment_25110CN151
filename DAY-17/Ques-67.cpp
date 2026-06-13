#include<iostream>
using namespace std;
int main(){
    int arr[50],arr2[50],arr3[50],n,m;
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
    int k=0;

    for(int i=0;i<n;i++){
        bool duplicate = false;
        
        for(int j=0;j<m;j++){
            if(arr[i]==arr2[j]){
                duplicate = true;
                break;

            }
        }
        if(duplicate){
            bool duplicate =false;

            for(int j = 0; j < k; j++) {
            if(arr3[j] == arr[i]) {
                duplicate = true;
                break;
            }
        }

        if(!duplicate) {
            arr3[k] = arr[i];
            k++;
        }
    }
    }
    cout << "The intersection array is " << endl;
    for (int i=0;i<k;i++){
        cout << arr3[i]<< " ";
    }

}