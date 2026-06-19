#include<iostream>
using namespace std;
int main(){
    int p,m,n,arr[50][50],arr2[50][50],arr3[50][50];
    cout<< "Enter the number of rows in matrix 1 : ";
    cin>>m;
    cout<< "Enter the number of columns in 1st matrix : ";
    cin>>n;
    cout<< "Enter the number of columns in 2nd matrix : ";
    cin>>p;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter the (" << i <<","<< j << ") Element of First Matrix : ";
            cin>>arr[i][j];
        }
        cout << endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            cout<<"Enter the (" << i<<","<< j << ") Element of Second Matrix : ";
            cin>>arr2[i][j];
        }
        cout<<endl;
    }
    int sum=0;
    
    for(int i=0;i<m;i++){
        for(int j=0 ; j<p;j++){
            for(int k=0;k<n;k++){
            int c =arr[i][k]*arr2[k][j];
                sum+=c;
        }
        arr3[i][j]=sum;
        sum=0;
    }
}
    cout<< "The Addition matrix is : " << endl;
    for(int i=0;i<m;i++){
        cout << "[ ";
        for(int j=0;j<p;j++){
            cout<<arr3[i][j] << " ";
        }
        cout << " ]"<< endl ;
    }
    return 0;
}