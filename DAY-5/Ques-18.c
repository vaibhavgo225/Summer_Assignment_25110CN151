#include<stdio.h>
int fact(int a){
    if (a==0 || a==1)
    return 1;
    else
    return a * fact(a-1);
}

int main(){
    int rem,sum=0,n1,n;
    printf("Enter the number to check if it is a strong number");
    scanf("%d",&n);
n1=n;
    while(n1>0){
        rem= n1%10;
        sum+=fact(rem);
        n1=n1/10;
    }
    if(sum==n)
        printf("The given number is a Strong number");
    else
    printf("The given number is not a Strong number");
}