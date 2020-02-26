#include<stdio.h>
void main()
{
    int n,c=0,i;
    scanf("%d",&n);
    int a[n];
    int max=a[0];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    
    for(i=1;i<=n;i++)
    {
        if(a[i]==max)
        {
            c++;
        }
    }
    printf("%d\n",c );
}