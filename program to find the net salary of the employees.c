//dearness allowance   = 40%
//house rent allowance = 20%
//provident fund       = 12%
//income tax           = 04%
#include<stdio.h>
void main()
{
    char empno[15],empname[25];
    float basic,da,hra,pf,it,gsal,deduct,netsal;
    printf("enter the employee number:\n ");
    scanf("%s",empno);
    printf("enter the employee name: \n");
    scanf("%s",empname);
    printf("enter the basic pay :\n");
    scanf("%f",&basic);
    da=basic*40/100;
    hra=basic*20/100;
    pf=basic*12/100;
    it=basic*4/100;
    gsal=basic+da+hra;
    deduct=pf+it;
    netsal=gsal-deduct;
    printf("employee number =%S\n",empno);
    printf("employee name=%s\n",empname);
    printf("net salary=%8.2f\n",netsal);
    getch();


}
