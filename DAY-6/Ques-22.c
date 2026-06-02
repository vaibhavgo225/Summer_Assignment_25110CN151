#include<stdio.h>
#include<math.h>
int main(){
    int bin,sum=0,result,i=0;
    printf("Enter the binary number to convert into decimal : ");
    scanf("%d",&bin);
    

    while(bin>0){
        result = bin%10;
        sum+=result*pow(2,i);
        i++;
        bin = bin/10;
    }
    printf("The binary number %d is represented in decimal as : %d ",bin,sum);

    return 0;
}