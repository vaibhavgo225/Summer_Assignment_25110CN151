#include<iostream>
using namespace std;
int main(){
    int arr[50],n,target,found=0;
    cout<< "Enter the number of elements ";
    cin>>n;
    cout << "Enter the target to find its frequency ";
    cin >> target;

     for(int i=0;i<n;i++){
        cout << "Enter the " << i+1 << " number : ";
        cin >> arr[i];
    }
    for (int i=0;i<n;i++){
        if(arr[i]==target){
            found++;
        }
    }
    cout << "The frequency of the entered element is "<<found<<"" <<endl;
    return 0;
}
