#include<stdio.h>
struct student 
{
    int roll;
    char name[10];
};
void main()
{
    struct student stu[5];
    int i;
    printf("*******************detalis of the students********************\n\n");
    for(i=0;i<5;i++){
        printf("\nroll_no of %d student\n",i+1 );

        scanf("%d",&stu[i].roll);
        printf("enter the name of %d student\n",i+1);
        scanf("%s",stu[i].name);
    }
    printf("\nDetails of the student \n");
    for(i=0;i<5;i++){
        printf("Details of %d student:\n",i+1 );
        printf("Roll_no : = %d\n",stu[i].roll );
        printf("name    : = %s\n",stu[i].name );
    }

   
}