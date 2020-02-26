#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node* next;

}snodes;

void insert(int x);
void print();
void main()
{
    struct node *snode,*head=NULL,*tem;
    int n;
    printf("enter the total number : ");
    scanf("%d",&n);
    int i ,x;
    for(i=0;i<n;i++){
        printf("enter the %d number :\n ",i+1);
        scanf("%d",&x);
        snode=(snodes*)malloc(sizeof(snodes));
        snode->data=x;
        if(head==NULL)
        {
            snode->next=NULL;
            head=snode;
            tem=head;

        }else
        {
            snode->next=NULL;
            tem->next=snode;
            tem=snode;
        }
    }
    printf("new list are \n");
    tem=head;
    while(tem!=NULL){
        printf("number=%d\n",tem->data );
        tem=tem->next;
        
    }

}

