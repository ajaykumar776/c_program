#include<stdio.h>

int fac(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
void fact_for_array(int a[], int n){
    int i;
    for(i=0;i<n;i++)
        printf("fact of %d is %d\n",a[i], fac(a[i]));
}
void main()
{
    int a[]={2, 5, 7, 4, 1, 0};
    int n=(sizeof (a)/sizeof a[0]);

    fact_for_array(a, n);
}
