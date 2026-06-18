#include<iostream>
using namespace std;
int main(){
    int m,n,arr[50][50],arr2[50][50],arr3[50][50];
    cout<< "Enter the number of rows matrix : ";
    cin>>m;
    cout<< "Enter the number of columns matrix : ";
    cin>>n;


    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter the (" << i <<","<< j << ") Element of First Matrix : ";
            cin>>arr[i][j];
        }
        cout << endl;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter the (" << i<<","<<j << ") Element of Second Matrix : ";
            cin>>arr2[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr3[i][j]=arr[i][j]+arr2[i][j];
        }
    }
    cout<< "The Addition matrix is : " << endl;
    for(int i=0;i<m;i++){
        cout << "[ ";
        for(int j=0;j<n;j++){
            cout<<arr3[i][j] << " ";
        }
        cout << " ]"<< endl ;
    }
    return 0;
}
