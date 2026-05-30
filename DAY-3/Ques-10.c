#include<stdio.h>
int main (){
    int n,m,i,j,count;
    printf("Enter the starting number of the range ");
    scanf("%d",&n);
    printf("Enter the ending number of the range ");
    scanf("%d",&m);
    printf("the prime numbers in the range %d - %d are\n",n,m);

    for(j=n;j<=m;j++){
        count=0;
        for(i=2;i<=j/2;i++)
    {
        if(j%i==0)
        {
            count++;
        }
    }
    if(count==0)
    printf("%d\n",j);
    }
    return 0;
    }