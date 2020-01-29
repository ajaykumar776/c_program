#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;

}s;
void main()
{
   
    struct node *n1,*n2,*n3,*n4,*n5;
    printf("enter the number: \n");
     n1 = (struct node*)malloc(sizeof(struct node));
    scanf("%d",&n1->data);
    printf("enter the 2nd no: \n");
    n2=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&n2->data);
    printf("enter the 3nd no: \n");
    n3=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&n3->data);
    printf("enter the 4nd no :\n");
    n4=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&n4->data);
    printf("enter the 5nd no: \n");
    n5=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&n5->data);
    printf("you enter five number : \n");
    printf("%d\n%d\n%d\n%d\n%d\n",n1->data,n2->data,n3->data,n4->data,n5->data );

}