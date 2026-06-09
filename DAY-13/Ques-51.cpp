#include<iostream>
using namespace std;
void maxmin(){
    int n , arr[15];
    cout << "Enter the total numbers to compare : ";
    cin >> n;
    for(int i=0;i<n;i++){
        cout << "Enter the " << i+1 << " number : ";
        cin >> arr[i];
    }
    int max =arr[0];
    int min =arr[0];
        for(int i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];

        if(arr[i] < min)
            min = arr[i];
    }
    cout << "The maximum value is : " << max << endl;
    cout <<"The minimum value is : " << min << endl ;
    }
    
    

int main(){

    maxmin();
    
}