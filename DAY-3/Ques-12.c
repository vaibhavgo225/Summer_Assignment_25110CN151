#include<stdio.h>
int lcm(int a, int b){

    int max = ((a>b)?a:b);
    int n = 1;
    int original= max;

    while(1){
        if(max%a==0 && max%b==0){
            return max;
        }
        n++;
        max = n*original;
    }
}

int main(){
    int a,b;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    printf("The LCM of %d and %d is %d",a,b,lcm(a,b));

    return 0;

}