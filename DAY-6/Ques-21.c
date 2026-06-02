#include<stdio.h>
int main (){
    int n,i,bin[64],rem;
    printf("Enter the decimal number : ");
    scanf("%d",&n);
    printf("The decimal number %d is represented in binary as : ",n);
    if(n==0)
    printf("0");
    while(n>0){
        bin[i] = n%2;
        n = n/2;
        i++;
    }
         for (i=i-1;i>=0;i--){
            printf("%d",bin[i]);
         }


}