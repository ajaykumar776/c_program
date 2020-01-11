#include<stdio.h>
struct emp
{
	int empno;
	char name[20];
	float salary;

};

void main()

{

	struct emp e1;
	//struct emp e2;
	printf("details of the employe no: 1. \n");
	printf("enter the employe no  name or salary\n");
	scanf("%d%s%f\n", &e1.empno,e1.name,&e1.salary);
	printf("%d%s%f\n", e1.empno,e1.name,e1.salary);
}