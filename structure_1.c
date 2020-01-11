
#include<stdio.h>
#include<string.h>
struct student
{
	int rollno;
	char name[10];
	float marks;


};
void main()

{
	struct student s;
	printf("Enter the Roll no and Name and Marks of the student :");
	scanf("%d",&s.rollno);
	scanf("%s",s.name);
	scanf("%f",&s.marks);
	printf("\nstudent details\n");
	printf("Roll no=%d\n",s.rollno );
	printf("Name=%s\n",s.name );
	printf("Marks=%f\n",s.marks );

}