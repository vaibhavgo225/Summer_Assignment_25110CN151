#include<stdio.h>
#include<math.h>
int main(){
    int n,product=1,i;
    printf("Enter the number to print the Table of :- ");
    scanf("%d",&n);

    for(i=1;i<=10;i++){
        product = n*i;
         printf("%d * %d = %d \n",n,i,product);

    }
    return 0;

}