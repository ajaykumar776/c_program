#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}snode;

struct node *head=NULL;

void insert_At_end()
{
     struct node *snode,*temp;
    int i,n;
    printf("enter the value of n :\n");
    scanf("%d",&n);
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

void delete_at_end()
{
    struct node *snode,*temp,*prev=NULL;
    temp = head;

    if(temp->next != NULL){
        while(temp->next != NULL){
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
    }
    free(temp);
}

void main()
{
    insert_At_end();
    print();
    delete_at_end();
    print();
    
}