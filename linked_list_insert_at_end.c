#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;

}s;
struct node *head=NULL;
void main()
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
     printf("new list are \n");
    temp=head;
    while(temp!=NULL){
        printf("number=%d\n",temp->data );
        temp=temp->next;
        
    }
}