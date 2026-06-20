#include<iostream>
using namespace std;
int main(){
char string[50] ="Vaibhav Goswami";
int i=0;
while(string[i]!='\0'){
        i++;
}
cout << "The length of the string is " << i;
return 0;
}