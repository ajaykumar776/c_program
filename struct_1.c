#include<stdio.h>

struct emply
{

    int emply_no;
    char  emply_name[20];
    float emply_saly;


};
void main()
{

    struct emply e;
    printf("size of employee:%u",sizeof(struct emply));


}
