#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}s;
struct node *rear=NULL,*front=NULL;
struct node *snode;

void insert (int n)
{
    snode=(struct node*)malloc(sizeof(struct node));
    snode->data=n;
    snode->next=NULL;
    if(front==NULL&&rear==NULL)
    {
        rear=front=snode;
    }
    else
    {
    rear->next=snode;
    rear=snode;
    }

}
void print()
{
    struct node *temp;
    temp=front;
    
        while(temp!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
    }
void main()
{
    insert(3);
    insert(4);
    print();
}


