#include<stdio.h>
int main(){
    int N,i=0,sum=0;
    printf("Enter the number to sum upto\n");
    scanf("%d",&N);
while(i<=N){
    sum +=i;
    i++;
}
printf("sum of the natural numbers upto %d is %d",N,sum);
    return 0;
}
