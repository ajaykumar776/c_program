#include<stdio.h>
void fact(int n,int *f);
void main()
{
  int n,x,f;
  printf("enter the value of n\n");
  scanf("%d",&n);
  fact(n,&f);


}
void  fact(int n,int *f)
{
  int i;
  *f=1;
  for(i=1;i<=n;i++){
    *f=*f*i;
  }
  printf("%d\n",*f );

}