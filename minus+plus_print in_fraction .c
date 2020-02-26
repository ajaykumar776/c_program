#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n \n");
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int p=0,q=0,z=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            p++;
        }else if(a[i]<0)
        {
            q++;
        }
        else
        {
            z++;
        }
    }
    float r,s,t;
    r=(float)p/n;
    s=(float)q/n;
    t=(float)z/n;
    printf("positive no =%f\nnegative no =%f\n zero no =%f\n",r,s,t );

}
