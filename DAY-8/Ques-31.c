#include<stdio.h>
int main(){
    char n,i,j;
    printf("Enter the Alphabet to print character triangle ");
    scanf("%c",&n);

    for(i='A';i<=n;i++){
        for(j='A';j<=i;j++){
        printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}