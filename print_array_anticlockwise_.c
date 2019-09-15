//print array anti_clockwise
#include<stdio.h>

void c_shift(int a[],int n)
{
    int k,i;
    k = a[0];
    for(i=0;i<n;i++){
        if(i<n-1){
            a[i] = a[i+1];
        }
        else{
            a[i] = k;
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

}

void main()
{
    int a[] = {1,2,3,4,5};
    int n = sizeof (a)/sizeof a[0];
    c_shift(a,n);


}
