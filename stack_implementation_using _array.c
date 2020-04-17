#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int arr[MAX];
int top=-1;

void push(int n)
{
  if(top>=MAX)
  {
    printf("stack is full :\n");
  }
  else{
    top++;
    arr[top]=n;
  }
}

void pop()
{
  if(top=-1){
    printf("stack is empty  : \n");
  }
  else{
    printf("pop element %d \n",arr[top]);
    top--;
  }
}
void print()
{
  if(top==-1)
  {
    printf("no element is there :\n");
  }
  else
  {
    int i;
    printf("youur push element are : \n");
    for(i=0;i<=top;i++){
      printf("%d\n", arr[i]);
    }
    printf("\n");
  }
  

}
void main()
{
  int ch ;
  printf("stack operation :\n");
  printf("1.for push:\n");
  printf("2.for pop :\n");
  printf("3.for print :\n");
  printf("4.for exit :\n");
  printf("enter your choice :\n");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:
        push(5);
        push(6);
        print();
        break;
    case 2:
        pop();
        print();
        break;
    case 3:
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