#include<stdio.h>
#include<math.h>
int main(){
    int count=0,rem,sum=0,n,m,n1,j,i;
    printf("Enter the starting range for Armstrong number ");
    scanf("%d",&n);
    printf("Enter the ending range for Armstrong number ");
    scanf("%d",&m);
    printf("The Armstrong number are :\n");

    for(i=n;i<=m;i++){
        sum=0;
        count=0;
    j=i;
    while(j>0){
      count++;
      j=j/10;
}
    j=i;
        while(j>0){
        rem = j%10;
        sum= sum + pow(rem,count);
        j = j/10;
    }
    if(sum==i)
    printf("%d\n",i);
    }
}