#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}s;
struct node *head=NULL;
void count();
void insert_At_end();
void print();
void main()
{
   insert_At_end();
   print();
   count();
   
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
void count()
{
    struct node *temp;
    temp = head;
    int count=0;

    while(temp != NULL){
        temp = temp->next;
        count++;
    }
    printf("\nNumber of Nodes is %d : \n\n",count);
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
