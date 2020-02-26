#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next,*prev;
}s;

struct node *head,*temp;

void insert_beggining()

{
  struct node *dnode,temp;
  int i,n;
  printf("enter total node : \n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("enter the %d node :\n",i+1 );
    dnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&dnode->data);

  if(head==NULL){
    
    head=dnode;
  }
  else{
    head->prev=dnode;
    dnode->next=head;
    head=dnode;
   }
}

}
void insert_at_end()
{
  struct node *dnode,*temp,*prev;
  int i,n;
  printf("enter total node : \n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  
    printf("enter the %d node :\n",i+1 );
    dnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&dnode->data);
    head->next=NULL;
    head->prev=NULL;

  if(head==NULL){
    
    head=dnode;
  }
  else
  {
    temp=head;

    while(temp!=NULL)
    {
      temp=temp->next;
    }
    dnode->next=NULL;
    temp->next=dnode;
    dnode->prev=temp;
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
void main()
{

  insert_beggining();
   print();
   insert_at_end();
   print();


}

