#include<stdio.h>
int exponent (int n,int p);
void main()
{
    int n,p,s;
    printf("enter the number \n");
    scanf("%d",&n);
    printf("enter the power of the given number\n");
    scanf("%d",&p);
    s=exponent(n,p);
    printf("%d\n",s );
   
}
int exponent(int n,int p)
{
    int i,sum=1;
    for(i=1;i<=p;i++){
        sum=sum*n;
    }
    return sum;

}


