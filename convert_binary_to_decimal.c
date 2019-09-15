#include<stdio.h>
#include<math.h>

int binary_to_decimal(int a[], int n)
{
    int i,sum=0;
    for(i=0;i<n;i++){
        sum += a[n-1-i]*pow(2,i);
    }
    return sum;
}

void main()
{
    int a[] = {1,0,1,1};
    int n = sizeof(a)/sizeof(a[0]);
    printf("decimal is %d", binary_to_decimal(a, n));

}









