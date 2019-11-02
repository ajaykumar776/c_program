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

    int  a[10],i;
    int n = sizeof(a)/sizeof(a[0]);
    printf("enter the array the array element\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    reverse_array_with_modified_loop(a,n);

}
