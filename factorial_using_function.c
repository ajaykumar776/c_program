#include<stdio.h>

int fac(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
//void fact_for_array(int a[], int n){
   // int i;
    //for(i=0;i<n;i++)
        //printf("fact of %d is %4.2d\n",a[i], fac(a[i]));
//}
void main()
{
    //int a[]={2, 5, 7, 4, 10, 0};
    int n=5;//(sizeof (a)/sizeof a[0]);
   printf("%d", fac( n));



}
