#include<stdio.h>

long int fact(long int x);

void main()
{
    int n=5,r=3;
    float ncr;
    ncr=fact(n)/(fact(r)*fact(n-r));
    printf("ncr=%f",ncr);
}

long int fact(long int x)
{
    int i;
    long int f=1;
    for(i=1;i<=x;i++){
        f=f*i;
    }
    return (f);

}
