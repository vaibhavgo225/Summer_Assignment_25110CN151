#include<iostream>
using namespace std;
int main(){
    int n,even =0,odd= 0,arr[50];
    cout << "Enter the number of elements : ";
    cin >> n;
    for(int i =0;i<n;i++){
        cout << "Enter the value in ["<<i<<"] : ";
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0)
        even++;
        else
        odd++;
    }
    cout << "The number of even elements are : ["<<even<<"]"<< endl;
    cout << "The number of odd elements are : ["<<odd<<"]";
    return 0;
}