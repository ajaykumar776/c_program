#include<stdio.h>

int min(int a[],int n)
{
    int min=a[0],i;
    for(i=1;i<n;i++){
        if(min>=a[i])
            min=a[i];
    }
    return min;
}
int  max(int a[],int n)
{
    int max=a[0],i;
    for(i=1;i<n;i++){
        if(max<=a[i])
            max=a[i];
    }
    return max;
}

void main()
{
    int a[]={ 5,6,7,1,2,8};
    int n= sizeof(a) / sizeof(a[0]);
    int i=min(a,n);
    int j= max(a,n);
    printf("min=%d\nmax=%d",i,j);
}
