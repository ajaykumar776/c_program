#include<stdio.h>
void main()
{
    int i,j,n=5,k;
    for(i=1;i<=n;i++){
            for(j=1;j<=n-i;j++){
              printf(" ");
            }
            for(k=1;k<=i;k++){
              printf("*");
            }
            printf("\n");
          }

            
           
}