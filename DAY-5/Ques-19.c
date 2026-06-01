#include<stdio.h>
int main (){
    int n,i,j,count;
    printf("Enter the number to get its prime factors : ");
    scanf("%d",&n);
    printf("The prime Factors of %d are :\n",n);

    for(i=2;i<=n;i++){
        if(n%i==0){
            count=0;
            for(j=1;j<=i/2;j++){
                if(i%j==0)
                    count++;    
            }
            if(count==1)
                    printf("%d\n",i);
            }
        }
        return 0;
    }


