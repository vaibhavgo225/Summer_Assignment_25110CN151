#include<stdio.h>
int main(){
    int rev =0,rem,n1,n;
    printf("Enter the number to finf if it is palindrome : ");
    scanf("%d",&n);
n1=n;
    while(n>0){
        rem = n%10;
        rev = rem + 10*rev;
        n= n/10;

    }
    if(rev==n1)
        printf("The number is palindrome");
    
    else 
    printf("The number is not Palindrome");
}