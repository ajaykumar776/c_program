#include<stdio.h>

void main()
{

    int i,n,sum=0;
    printf("enter the valiue n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            if(i%2==0){


                printf( "%d\n",sum);

            }
    }
    printf("sum is %d\n",sum);
}

