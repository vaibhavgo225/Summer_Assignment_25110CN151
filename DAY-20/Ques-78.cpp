#include<iostream>
using namespace std;
int main(){
    int m,n,arr[50][50],c;
    cout<< "Enter the number of rows matrix : ";
    cin>>m;
    cout<< "Enter the number of columns matrix : ";
    cin>>n;

    if(m!=n){
        cout << "The matrix is not symmetric since not a square matrix";
        return 0;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter the (" << i <<","<< j << ") Element of Matrix : ";
            cin>>arr[i][j];
        }
        cout << endl;
    }
    int k=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]!=arr[j][i]){
                cout<<"Matrix is non symmetric";
                k++;
                break;
            }
        }
        if(k>0)
        break;
}
if(k==0){
    cout<< "The matrix is symmetric";
}
}