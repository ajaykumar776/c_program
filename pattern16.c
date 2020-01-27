#include<stdio.h>
void main()
{
    int i,j,n=5,ch='A';
    for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
              if(j%2==0){
              	printf(" 0 ");
              }else
              {
              	printf(" 1 ");
              }
            }

            printf("\n");
           
    }
}