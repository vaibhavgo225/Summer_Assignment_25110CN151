#include<stdio.h>
/*Defined outside the loop because during the recursion the fuction,
it will recursively do the value of rev=0 which will lead to the final output as 0.*/
int rev=0;
int revr(int n){
    if (n==0)
    return rev;
    rev= n%10 + rev*10;
    return revr(n/10);
}

int main(){
    int n;
    printf("Enter the number to print the reverse of : ");
    scanf("%d",&n);
    printf("The reverse of the %d is %d",n,revr(n));
    return 0;
}