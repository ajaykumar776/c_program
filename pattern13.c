#include<stdio.h>
void main()
{
    int i,j,n=5,ch;
    for(i=1;i<n;i++){
    	ch=1;
            for(j=1;j<=i;j++){
                printf("%d",ch);
                ch++;
            }

            printf("\n");
           
    }
}