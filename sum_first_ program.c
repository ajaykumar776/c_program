#include<stdio.h>
int sum(int a,int b)

{
    return (a==b? 3*(a+b):a+b) ;

}
void main()
{

    printf("%d",sum(5,7));
}
