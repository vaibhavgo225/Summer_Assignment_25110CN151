#include<iostream>
using namespace std;
int main(){
    int m,n,arr[50][50],c,sum=0;
    cout<< "Enter the number of rows matrix : ";
    cin>>m;
    cout<< "Enter the number of columns matrix : ";
    cin>>n;


    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter the (" << i <<","<< j << ") Element of Matrix : ";
            cin>>arr[i][j];
            if(i==j){
            sum += arr[i][j];
            }
        }
        cout << endl;
    }
    cout << "The sum of diagonal element is = " <<sum;
    return 0;
    
}