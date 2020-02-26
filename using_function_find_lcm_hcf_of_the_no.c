#include<stdio.h>
int  lcm()
{

    int a,b,i,lcm;

    printf("enter the two value for lcm : ");
    scanf("%d %d",&a,&b);
    int max = (a>b) ? a : b;
    for (i=max;i<=a*b;i++){
        if(i%a==0 && i%b==0){
            lcm=i;
            break;
        }
    }

    printf("lcm of %d\n",lcm);
    printf("enter the two value for hcf : \n");
}
int hcf()
{
    int a,b,hcf=1,i;
    printf("enter the value of a and b: ");
    scanf("%d %d",&a,&b);
    int min = (a<b) ? a:b;

    for(i=2;i<=min;i++){
        if (a%i==0 && b%i==0)
            hcf=i;


    }
    printf("hcf is %d\n",hcf);

}
void main()
{
    lcm();
    hcf();
}
