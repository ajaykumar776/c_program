//array print clock wise
#include<stdio.h>

void c_shift(int a[],int n)
{
    int k,i;
    k = a[n-1];
    for(i=n-1;i>=0;i--){
        if(i>0){
            a[i] = a[i-1];
        }
        else{
            a[i] = k;
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

}

void main()
{
    int a[] = {1,2,3,4,5};
    int n = sizeof (a)/sizeof a[0];

    c_shift(a,n);
    c_shift(a,n);



}
