#include<stdio.h>
#include<math.h>

int gcd(int a,int b)
{

  int result = ((a<b)? a : b);

  while (result>0){

    if(a%result==0 && b%result==0)
    return result;
     result--;
  }
}

int main(){
    int a,b;
    printf("Enter the first number :");
    scanf("%d",&a);
    printf("Enter the second number :");
    scanf("%d",&b);

    printf("The greatest common divisor of %d and %d is %d",a,b,gcd(a,b));

    return 0;
}