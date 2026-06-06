#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter the number of lines to print the reverse star pyramid pattern : ");
    scanf("%d",&n);

    for(i=n;i>=1;i--){
        for(j=n-i;j>=0;j--){
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++){
            printf("*");
        }
        printf("\n");
    }
}