#include<stdio.h>
void main()
{
    int i,j,n=20 ,k;
    for(i=1;i<n;i++){
            for(j=1;j<=n-i;j++){
              printf(" ");
            }
            for(k=1;k<=i*2-1;k++){
              printf(" sudi ");
              printf("\n");
            }
            printf("\n");
          }

            
           
}