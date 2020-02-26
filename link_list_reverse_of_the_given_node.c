#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}s;
struct node *head=NULL;
void reverse_();
void insert_At_end();
void print();
void main()
{
   head=NULL;
   insert_At_end();
   print();
   reverse_() ;
   print();
   
}
void insert_At_end()
{
     struct node *snode,*temp;
    int i,n=5;
    for(i=0;i<n;i++){
        printf("enter the data\n");
        snode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&snode->data);
    
    if(head==NULL)
    {
        snode->next=NULL;
        head=snode;
        temp=head;
    }
    else
    {
        snode->next=NULL;
        temp->next=snode;
        temp=snode;
    }

    }
}
void reverse_()
{
    struct node *current,*next,*prev,*temp;
    temp=head;
    current=head;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;

}

 void print()
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d -> ",temp->data );
        temp=temp->next;
        
    }
    printf("\n");

}
