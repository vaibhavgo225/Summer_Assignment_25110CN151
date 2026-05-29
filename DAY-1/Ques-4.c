#include<stdio.h>
int main (){
    int rem,n, digit=0;
    printf("Enter the number to find the digits in it");
    scanf("%d",&n);

while(n>0){
    rem = n%10;
digit++;
n=n/10;
}
printf("The digits in the entered number are %d ",digit);
return 0;
}