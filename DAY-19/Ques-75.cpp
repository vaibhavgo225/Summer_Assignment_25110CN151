#include<iostream>
using namespace std;
int main(){
    int m,n,arr[50][50],c;
    cout<< "Enter the number of rows matrix : ";
    cin>>m;
    cout<< "Enter the number of columns matrix : ";
    cin>>n;


    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter the (" << i <<","<< j << ") Element of Matrix : ";
            cin>>arr[i][j];
        }
        cout << endl;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i>j){
                c=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=c;
            }
            }
        }
        cout<< "The Transpose matrix is : " << endl;
    for(int i=0;i<m;i++){
        cout << "[ ";
        for(int j=0;j<n;j++){
            cout<<arr[i][j] << " ";
        }
        cout << " ]"<< endl ;
    }
    return 0;

}