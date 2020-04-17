#include<stdio.h>

int a[100], front=-1, rear=-1;

int is_empty(){
    if(front==rear) return 1;
    else return 0;
}

void print(){
    int i;
    if(!is_empty()){
        for(i=front+1;i<=rear;i++){ 
            printf("%d ", a[i]);
        }
        printf("\n");
    }else{
        printf("Queue is empty.\n");
    }
}

void insert(int n){
    rear++;
    a[rear] = n;
}

void delete(){
    if(!is_empty())
        front++;
    else printf("Queue is empty cant delete\n");
}

void main(){
int ch ;
  printf("stack operation :\n");
  printf("1.for insert:\n");
  printf("2.for delete :\n");
  printf("3.for print :\n");
  printf("4.for exit :\n");
  printf("enter your choice :\n");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:
        insert(5);
        insert(6);
        insert(7);
        print();
        break;
    case 2:
        delete();
        print();
        break;
    case 3:
        print();
        break;    
    case 4:
        //exit(0);
        break;
    default: 
        printf("invalid choice :\n");
        break;
    
    }
}