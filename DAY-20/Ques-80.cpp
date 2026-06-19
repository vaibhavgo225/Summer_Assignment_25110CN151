#include<iostream>
using namespace std;
int main(){
    int m,n,sum=0,arr[50][50],c,k;
    cout<< "Enter the number of rows matrix : ";
    cin>>m;
    cout<< "Enter the number of columns matrix : ";
    cin>>n;
    cout<< "Enter the number of column you want to find sum of : ";
    cin>>k;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter the (" << i <<","<< j << ") Element of Matrix : ";
            cin>>arr[i][j];
        }
    }
        cout << endl;
        int j=k;
        for(int i=0;i<n;i++){
           sum=sum+arr[i][j];
        }
        cout<< "The column wise sum is : "<< sum;
    }
    
    


