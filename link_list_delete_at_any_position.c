#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}s;
struct node *head=NULL;
void delete_any();
void insert_At_end();
void print();
void main()
{
   insert_At_end();
   print();
   delete_any(); 
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
void delete_any(){
    struct node *temp, *prev;
    int count = 0;
    temp = head;
    prev = NULL;
    int pos=5;
    void main()

    {

    }

    if(temp != NULL){
        if(temp->next != NULL){
            while(count < pos-1){
                prev = temp;
                temp = temp->next;
                count++;
            }
            prev->next = temp->next;
        }else
        {
            head = NULL;
        }
        printf("Number %d deleted\n", temp->data);
        free(temp);
    }else
    {
        printf("List is empty cant delete\n");
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
