#include<stdio.h>
int main(){
    int rev =0,rem,n;
    printf("Enter the number to reverse : ");
    scanf("%d",&n);

    while(n>0){
        rem = n%10;
        rev = rem + 10*rev;
        n= n/10;

    }
    printf("Reverse of the given number is %d",rev);
    return 0;
}