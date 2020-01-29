#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}s;

void main()
{
    int n;
    struct node *snode,*head,*temp = NULL;

    printf("Enter total number: ");
    scanf("%d", &n);

    while(n){
        snode = (struct node*)malloc(sizeof(struct node));
        scanf("%d", &snode->data);
        if(temp == NULL){
            snode->next = NULL;
            temp = snode;
        }else{
            snode->next = temp;
            temp=snode;
        }
        n--;
    }

    head = temp;
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
}