#include<stdio.h>

int lcm(int a,int b)

{
    int i,flag, max;
    max = a>b ? a : b;
    for(i=max;i<a*b;i++){
        if(i%a==0 && i%b==0){
            flag=i;
            break;
        }
    }
    return(i);
}

void main()
{
      int a,b ;
      printf("enter the value of a,b: ");
      scanf("%d %d",&a,&b);
      printf("%d",lcm(a,b));

}
