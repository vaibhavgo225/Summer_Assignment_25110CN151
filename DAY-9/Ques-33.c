#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter the number to print reverse star pattern ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=n;j>=i;j--){
        printf("*");
        }
        printf("\n");
    }
    return 0;
}