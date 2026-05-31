#include<stdio.h>
#include<math.h>
int main(){
    int count=0,rem,sum=0,n,n1;
    printf("Enter the number to check weather it's Armstrong : ");
    scanf("%d",&n);
n1=n;
    while(n1>0){
count++;
n1=n1/10;
}
n1=n;

    while(n1>0){
        rem = n1%10;
        sum= sum + pow(rem,count);
        n1 = n1/10;
    }
    if(sum==n)
    printf("The number is Armstrong");
    else
    printf("The number is not an Armstrong number");
}