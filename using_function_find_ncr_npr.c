#include<stdio.h>

int factorial(int n){
    int i, fact=1;
    for(i=1;i<=n;i++) fact*=i;

    return fact;
}

// ncr = n!/(r!*(n-r)!)
int ncr(int n, int r){
    int ans;
    ans = factorial(n) / (factorial(r)*factorial(n-r));
    return ans;
}

// npr = n!/(n-r)!
int npr(int n, int r){
    int ans=factorial(n)/factorial(n-r);
    return ans;

}

void main()
{
    int n=6, r=3;
    printf("ncr is %d, npr is %d", ncr(n, r), npr(n, r));
}
