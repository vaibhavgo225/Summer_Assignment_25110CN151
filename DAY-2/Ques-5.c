#include<stdio.h>
int main(){
    int sum=0,n,rem,n1;
    printf("Enter the number to print the sum of its digit : ");
    scanf("%d",&n);

    n1=n;

    while(n1>0){
        rem = n1%10;
        sum = sum + rem;
        n1 = n1/10;
    }
    printf("The sum of digits of the number %d is %d",n,sum);
    return 0;
}