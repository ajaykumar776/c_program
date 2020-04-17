#include<stdio.h>
int arr[10];
int top=-1;
void push(int n)
{
   top++;
   arr[top]=n;
}
void print()
{
    int i;
    for(i=0;i<=top;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("\n");
}

void main()
{
    printf(" : convert decimal to binary using stack : ");
    int n,r,m;
    printf("enter a number : \n");
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        r=n%2;
        push(r);
        n=n/2;
    }
    print();
}