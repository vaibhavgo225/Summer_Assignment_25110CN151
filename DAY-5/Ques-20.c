#include<stdio.h>
int main (){
    int n,i,j,count,a;
    printf("Enter the number to get its largest prime factor : ");
    scanf("%d",&n);
    printf("The largest prime Factor of %d is :\n",n);

    for(i=2;i<=n;i++){
        if(n%i==0){
            count=0;
            for(j=1;j<=i/2;j++){
                if(i%j==0)
                    count++;    
            }
            if(count==1)
                    a=i;
            }
        }
        printf("%d",a);
        return 0;
    }