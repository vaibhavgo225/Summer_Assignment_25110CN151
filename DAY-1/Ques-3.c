#include<stdio.h>
int main(){
    int N,i=1;
    int long long fact=1;
    printf("Enter the number to find factorial of\n");
    scanf("%d",&N);
while(i<=N){
    fact = fact * i;
    i++;
}
printf("Factorial of %d is %lld",N,fact);
    return 0;
}