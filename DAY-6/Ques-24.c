#include<stdio.h>
int main (){
    int n,x,power=1,n1;
    printf("Enter the number : ");
    scanf("%d",&x);
    printf("Enter the exponent : ");
    scanf("%d",&n);
    n1=n;

   while(n1>0){
    power = power*x;
      n1--;
   }
   printf("The %d raised to the power %d is equal to %d",x,n,power);
   return 0;
}