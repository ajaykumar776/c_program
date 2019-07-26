#include<stdio.h>
int sum( int a, int b)
{
int sum=0;
sum=a+b;
    return sum;
}
int sub(int a,int b)
{
  int sub;
  sub=a-b;
  return sub;

}
int mul(int a ,int b)
{
   int mul;
   mul=a*b;
   return mul;

}
void main()
{
    int a,b;
    printf("enter the value of a b");
    scanf("%d %d",&a,&b);
    printf(" sum is %d\n ",sum(a,b));
    printf(" sub is %d\n",sub(a,b));
    printf(" mul is %d\n",mul(a,b));




}

