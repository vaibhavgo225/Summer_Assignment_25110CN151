#include<stdio.h>
int main(){
    int count=0,n,i,rem;
    printf("Enter the number to check if it is prime : ");
    scanf("%d",&n);

    for(i=1;i<=n/2;i++)
    {
        rem = n%i;

        if(rem==0)
        {
            count++;
        }
    }
    if(count==1)
        printf("The given number is Prime");
    else 
        printf("The given number is not Prime");

    return 0;

}