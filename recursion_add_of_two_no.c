#include<stdio.h>

int sum(int x,int y)
{
    if(y==0){
        return x;
    }else
        return 1+sum(x,y-1);
}

void main()
{
    int x=3,y=4;
    printf("%d",sum(x,y));
}
