#include<stdio.h>
void main()
{
    int i,j,n=5,ch='A';
    for(i=n;i>=1;i--){
            for(j=1;j<=i;j++){
                printf("%2Sc",ch);
         			ch++;
            }

            printf("\n");
           
    }
}