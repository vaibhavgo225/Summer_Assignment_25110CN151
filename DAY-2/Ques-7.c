#include<stdio.h>
int main (){
    int product =1,rem,n,n1;
    printf("Enter the number to find the product of its digits : ");
    scanf("%d",&n);
 n1=n;
    while(n1>0){
        rem = n1%10;
        product = product * rem;
        n1= n1/10;

    }
     printf("The product of digits of the number %d is %d",n,product);
    return 0;
}