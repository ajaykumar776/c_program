#include<stdio.h>
void main()
{
    int a,b,c,k;
    printf("enter the three no");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c)
            k=a;
        else
            k=c;
        }else{

        if(b>c)
            k=b;
        else
            k=c;

        }
        printf("%d is greater number ",k);

}
