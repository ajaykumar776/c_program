#include<stdio.h>
void main()
{
    int i,j,n=5,ch='A';
    for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                if(i==j){
                  printf("1 ");
                }else
                {
                  printf("0 ");
                }
              }
              printf("\n");
            }

            
           
}