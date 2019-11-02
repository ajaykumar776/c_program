#include<stdio.h>

struct emply
{

    int emply_no;
    char  emply_name[20];
    float emply_saly;


};
void main()
{

    struct emply e={10001,"ajay",100000};
    printf("employee id no :%d\nemployee name is: %s\nemployee salary is : %f\n",e.emply_no,e.emply_name,e.emply_saly);


}
