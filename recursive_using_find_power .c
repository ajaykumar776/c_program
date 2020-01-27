#include<stdio.h>
int power(int b,int p);
void main()

{
    int b,p;
    printf("enter the value of n k \n");
    scanf("%d%d",&b,&p);
    power(b,p);
    printf("%d\n",power(b,p));
}

int power(int b,int p)
{
    if(p==0){
        return 1; 
    }else
    return (b*power(b,p-1));
}
