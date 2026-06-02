#include<stdio.h>
int Fib(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 1;

   return Fib(n-1) + Fib(n-2);
}

int main(){
    int n,i;
    printf("Enter the number of terms of Fibonacci series to print : ");
    scanf("%d",&n);

    for (i=0;i<n;i++) {
        printf("%d ", Fib(i));
    }

    return 0;
}