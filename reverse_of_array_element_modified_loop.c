#include<stdio.h>

void reverse_array_with_modified_loop(int a[],int n)
{

    int i,t;

    for(i=0;i<n/2;i++){
        t = a[i];
        a[i] = a[n-1-i];
        a[n-1-i]= t;
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

}
void main()
{

    int  a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    reverse_array_with_modified_loop(a,n);

}
