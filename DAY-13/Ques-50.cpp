#include<iostream>
using namespace std;
void sum(int arr[], int size){
    int sum =0,average;
    for(int index=0;index<size;index++){
        cout << "Enter the element in arr["<<index<<"] ";
        cin >> arr[index];
    }
    for(int index=0;index<size;index++){
        sum +=arr[index];
    }
    cout << "The sum of the elements of array is" << sum << endl;
    average = sum/size;
    cout<< "The average of the elements of the array is" << average ;
}
int main(){
    int arr[20],size;
    cout <<"Enter the size of array ";
    cin >> size;
    sum(arr,size);
}