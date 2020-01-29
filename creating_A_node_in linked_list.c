#include<stdio.h>
#include<stdlib.h>
typedef struct node 
{
  int data;
  struct node *next;
}s_noode;

void main()
{
    struct node *n1,*n2;
    printf("enter  the number \n");
    n1= (s_noode*)malloc(sizeof( s_noode));
    scanf("%d",&n1->data);
    printf("enter the second the number : \n");
    n2=(s_noode*)malloc(sizeof (s_noode));
    scanf("%d",&n2->data);
    printf("first number = %d\n",n1->data );
    printf("second number=%d\n",n2->data );

}


