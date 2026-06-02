#include<stdio.h>
int fact(int a){
    if (a==0 || a==1)
    return 1;
    else
    return a * fact(a-1);
}

int main(){
    int n;
    printf("Enter the number to find the factorial of : ");
    scanf("%d",&n);
    printf("The factorial of %d is %d ",n,fact(n));
    return 0;
    

}