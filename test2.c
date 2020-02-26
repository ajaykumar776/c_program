#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int coeff;
    int exp;
    struct node *next;
}sNode;
struct node *head, *head1, *head2;

void insert(struct node **header, int coeff, int exp){
    struct node *snode, *temp, *head_temp;
    snode = (struct node*)malloc(sizeof(struct node));
    snode->coeff = coeff;
    snode->exp = exp;

    head_temp = *header;

    if(head_temp == NULL){
        snode->next = NULL;
        head_temp = snode;
        *header = head_temp;
    }else{
        temp = head_temp;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        snode->next = NULL;
        temp->next = snode;
    }
}

void polynomial_sum(){
    struct node *temp1, *temp2;
    temp1 = head1;
    temp2 = head2;

    while(temp1 != NULL && temp2 != NULL){
        if(temp1->exp > temp2->exp){
            insert(&head, temp1->coeff, temp1->exp);
            temp1 = temp1->next;
        }else if(temp1->exp < temp2->exp){
            insert(&head, temp2->coeff, temp2->exp);
            temp2 = temp2->next;
        }else{
            insert(&head, temp1->coeff + temp2->coeff, temp1->exp);
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }

    while(temp1 != NULL){
        insert(&head, temp1->coeff, temp1->exp);
        temp1 = temp1->next;
    }

    while(temp2 != NULL){
        insert(&head, temp2->coeff, temp2->exp);
        temp2 = temp2->next;
    }
}

void print(struct node **header){
    struct node *temp;
    temp = *header;
    while(temp!=NULL){
        printf("%dx^%d ", temp->coeff, temp->exp);
        temp = temp->next;
    }
    printf("\n");
}

void main()
{
    head = NULL;
    head1=NULL; head2=NULL;

    insert(&head1, 5, 10);
    insert(&head1, 3, 5);
    insert(&head1, 1, 0);

    insert(&head2, 3, 8);
    insert(&head2, 2, 5);
    insert(&head2, 2, 1);
    insert(&head2, 3, 0);

    print(&head1);
    print(&head2);

    polynomial_sum();
    print(&head);
}