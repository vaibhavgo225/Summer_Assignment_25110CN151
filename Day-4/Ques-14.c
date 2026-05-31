#include<stdio.h>
int main(){
    int a=0,b=1,c=0,i,n;
    printf("Enter n to find nth Fibonacci term ");
    scanf("%d",&n);
    

/*Here the loop will run upto (i<n) and equality has been removed
because the result is printed after the value is updated but 
if equality exists the value of 'a' will be updated and it would lead to print the (n+1)th term */

    for(i=1;i<n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("The nth term of the Fibonacci series is\t%d",a);
    return 0;
}