#include<stdio.h>
void main()
{
    int i,j,n=5 ,k;
    for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
              printf("*");
           
          }
          printf("\n");
        }
         for(i=n;i>=1;i--){
            for(j=1;j<i;j++){
              printf("*");
           
          }
          printf("\n");
        }

            
           
}