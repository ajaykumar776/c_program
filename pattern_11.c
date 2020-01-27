#include<stdio.h>
void main()

{
    int i,j,n,k=1;
    char ch='A';
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf(" %c ",ch);
        }
        printf("\n");
        ch++;
    }
}
