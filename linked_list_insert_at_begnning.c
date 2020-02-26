#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;

}s;
struct node *head=NULL;
void insert_beg(int n)
{
    struct node *snode,*temp;
    int i,n1=5;
    for(i=0;i<n1;i++){
        printf("enter the data\n");
        snode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&snode->data=n);
    
    if(head==NULL)
    {
        snode->next=NULL;
        head=snode;
        //temp=head;
    }
    else
    {
        snode->next=head;
        head=snode;
    }
}
}

void main()
{
    
     printf("new list are \n");
    temp=head;
    while(temp!=NULL){
        printf("number=%d\n",temp->data );
        temp=temp->next;
        
    }
}