#include<stdio.h>;

void main()
{
    int i,j,n,a[]={10,8,6,4,2,1,10,8,6,4,2,1};
    n=sizeof(a)/sizeof(a[0]);

    for(i=0;i<n;i++){
        for(j=0;j<a[i];j++){
            printf("*");
        }
        printf("\n");
    }

}
