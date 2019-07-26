#include<stdio.h>
void main()
{


    int a[100],i,j,flag=1,n;
    printf("enter the array element");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);

        for(i=0;i<5;i++){
            n=a[i];
            flag=0;
            for(j=2;j<n;j++){
                if(n%j==0){
                    flag=0;
                    break;
                }
            }
            if(flag==0){
                     for(i=0;i<n;i++){
                printf("\n%d is a prime",n);
            }
            return(0);



        }
}
