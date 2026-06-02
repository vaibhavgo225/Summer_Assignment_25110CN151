#include<stdio.h>
int main(){
    int n,i,count=0;
    printf("Enter the number to find its set bits : ");
    scanf("%d",&n);
    
    while(n>0){
    if(n&1){
        count++;
    }
    n = n >> 1;
    }
    printf("The set bits are %d",count);
    return 0;

}