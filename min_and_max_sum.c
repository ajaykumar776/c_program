#include<stdio.h>
int  main()
{
    int n,i;
    printf("enter n :\n");
    scanf("%d",&n);
    int a[n],sum=0;
    int min_sum;
    int max_sum;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    min_sum=sum-a[n-1];
    max_sum=sum-a[0];
    printf("%d %d\n",min_sum,max_sum );
}