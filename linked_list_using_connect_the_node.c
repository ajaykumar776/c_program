#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;

}Snodes;

void main()
{
   
    struct node *n1,*n2,*head,*tem;
    n1=(Snodes*)malloc(sizeof(Snodes));
    n2=(Snodes*)malloc(sizeof(Snodes));
    printf("enter the two number : \n");
    scanf("%d",&n1->data);
    printf("enter the second the number : \n");
    scanf("%d",&n2->data);

    head=n1;
    n1->next=n2;
    n2->next=NULL;
   
    printf("your given number \n");
    tem=head;
    while(tem!=NULL){
        printf("number = %d\n",tem->data );
        tem=tem->next;

    }



}