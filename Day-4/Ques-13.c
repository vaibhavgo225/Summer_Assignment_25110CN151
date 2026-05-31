#include<stdio.h>
int main(){
    int a=0,b=1,c=0,i,n;
    printf("Enter the the number of terms : ");
    scanf("%d",&n);
    printf("The fibonacci series upto the term %d is\n",n);

    for(i=1;i<=n;i++){
        printf("%d\t",a);

        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}