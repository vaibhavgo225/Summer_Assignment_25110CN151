#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool longer(string x, string y) {
    return x.length() < y.length();
}

int main() {
    int n;
    cout<<"Enter the number of words to sort by length ";
    cin>>n;
    vector<string> words(n);

    for(int i=0;i<n;i++){
        cout<<"Enter the " << i+1 << " word : ";
        cin>>words[i];
    }
    sort(words.begin(),words.end(), longer);

    cout<<"The words sorted by length are : "<< endl;
    for(string word:words){
        cout<<word<<endl;
    }
    return 0;
}