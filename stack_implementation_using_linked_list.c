#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
  int data;
  struct node *next;

}s;
struct node *top=NULL,*temp,*snode;


void push(int n)
  {
    snode=(struct node*)malloc(sizeof(struct node));
    if(top == NULL){
          snode->next = NULL;
          snode->data=n;
          top = snode;
      }else{
          snode->data=n;
          snode->next = top;
          top=snode;
      }
  
  }
void pop()
{
  struct node *temp;
  temp=top;
  if(top==NULL)
  {
    printf("no node is there :\n");
  }else

  {
    top=top->next;
    free(temp);
  }
}
void print()
{
  struct node *temp;
  temp = top;
  printf("your node element are : \n");
  if(top != NULL){
      while(temp!=NULL){
          printf("%d ", temp->data);
          temp = temp->next;
      }
  }else{
      printf("Stack is empty\n");
  }
  printf("\n");
}

void main()
{
  int ch ;
  printf("stack operation  using linked list :\n");
  printf("1.for insert:\n");
  printf("2.for delete :\n");
  printf("3.for print :\n");
  printf("4.for exit :\n");
  printf("enter your choice :\n");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:
        push(5);
        push(6);
        push(7);
        print();
        break;
    case 2:
        push(5);
        push(6);
        push(7);
        print();  
        pop();
        print();
        break;
    case 3:
        push(5);
        print();
        break;    
    case 4:
        exit(0);
        break;
    default: 
        printf("invalid choice :\n");
        break;
    
    }

}
