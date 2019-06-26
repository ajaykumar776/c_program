#include<stdio.h>

void main()
{

    int i,n=100,sum=0;
    for(i=1;i<=n;i++){
        if(i%2==1){
            sum += i;
            
        }
    }
    printf("sum is %d\n",sum);
}
