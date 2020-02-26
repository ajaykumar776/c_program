#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;

}s;
struct node *head;

void insert_at_begnnig();
void delete_at_begnning();
void print();

void main()
{
    //head=NULL;
    insert_at_begnnig();
    print();
    delete_at_begnning();
    print();
}
void insert_at_begnnig()
{
    struct node *temp,*snode;
    int i,n=5;
    for(i=0;i<n;i++){
    printf("enter the data: \n");
    snode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&snode->data);
    
    if(head==NULL)
    {
        snode->next=NULL;
        head=snode;
    }
    else
    {
        snode->next=head;
        head=snode;
    }
}

}
void delete_at_begnning()
{
    struct node *temp;
    temp=head;
    if(head!=NULL)
    {
        head=head->next;
        free(temp);
    }else
    {
        printf("there is no node : ");
    }
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
