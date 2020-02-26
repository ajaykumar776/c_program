#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}snode;

struct node *head;

void insert_at_pos(int n,int pos)
{
    struct node *snode,*temp;
    snode = (struct node *)malloc(sizeof(struct node));
    snode->data = n;
    int i;

    if(pos == 1){
        snode->next = head;
        head = snode;
    }
    else{
        temp = head;
        for(i=0;i<pos-2;i++){
            temp = temp->next;
        }
        snode->next = temp->next;
        temp->next = snode;
    }
    //printf("\n");
}

void print()
{
    struct node *temp;
    temp = head;

    while(temp != NULL){
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
}

void main()
{
    head = NULL;
    insert_at_pos(2,1);//2
    insert_at_pos(5,2);//2 5
    insert_at_pos(9,3);//9 2 5
    print();

}