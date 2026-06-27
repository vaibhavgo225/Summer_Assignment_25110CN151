#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<< "Enter the number of names to sort alphabetically : ";
    cin>>n;
    cin.ignore();
    vector<string> names(n);
    for(int i=0;i<n;i++){
        cout << "Enter the name of " << i+1 <<" student : ";
        getline(cin,names[i]);
    }
    sort(names.begin(),names.end());
    cout << "The names arrange in alphabetical order are : "<<endl;
    for(string name:names){
        cout<<name<<endl;
        
    }
    return 0;
}