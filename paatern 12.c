#include<stdio.h>
void main()
{
    int i,j,n=5,ch=1;
    for(i=n;i>=1;i--){
            for(j=1;j<=i;j++){
                printf("%d",ch);
            }
            printf("\n");
            ch++;
    }
}