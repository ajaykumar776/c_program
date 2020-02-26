#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}s;
struct node *head=NULL;
void insert_At_begnnig();
void insert_At_end();
void reverse_();
void print();
void count();
void delete();

void main()
{
  
    head=NULL;

    int option, suboption;
    while(1){
        printf("\nEnter your choice : \n");
        printf("1: Insert\n2: Delete\n3: Print\n4: Search\n5: Count\n6: Exit\n");
        scanf("%d", &option);

        switch(option){
            case 1:
                printf("What sub operation in insert\n");
                printf("1: Beginning, 2: End, 3: Any Position\n");
                scanf("%d", &suboption);

                switch(suboption)
                {
                    case 1:
                        insert_beginning(); 
                        break;
                    case 2:
                        insert_end(); 
                        break;
                    case 3:
                        insert_any(); 
                        break;
                    default: return; break;
                } 
                break;
            case 2:
   switch(ch)
   {
    case 1:
        insert_At_begnnig();
        print();
        count();
        reverse_();
        delete();
        print();
        break;
    case 2:
        insert_At_end();
        print();
        count();
        reverse_();
        print();
        delete();
        print();
         break;
    case 3:
        count();
        break; 
    case 4:
        reverse_();

        break;    
    case 5:
        delete();
        break;
    case 6:
        printf("thanku for visiting :\n");
        break;            
    default : 
    printf("you have entered wrong choics \n");
    break;
    }
}
void insert_At_begnnig()
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
        //temp=head;
    }
    else
    {
        snode->next=head;
        head=snode;
    }
}
    
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
void count()
{
    struct node *temp;
    temp = head;
    int count=0;

    while(temp != NULL){
        temp = temp->next;
        count++;
    }
    printf("\nNumber of Nodes is %d : \n\n",count);
}
void reverse_()
{
    struct node *p,*q;
    int len=5;
    int i=0,k,j=len-1;
    p=q=head;
    printf("REVERSE of the given node : \n");
    while(i<j)
    {
        k=0;
        while(k<j)
        {
            q=q->next;
            k++;
         }   
            int temp=p->data;
            p->data=q->data;
            q->data=temp;
            i++;
            j--;
            p=p->next;
            q=head;
        }
          //print();
          //printf("REVERSE of the given node : \n");
    }

   void delete()
   {
    struct node *temp=head;
    int loc;
    int len=5;
    printf("enter the location of the node :\n");
    scanf("%d",&loc);
    if(loc>len)
    {
        printf("invalid choice : \n");
    }
    else if(loc==1)
    {
        temp=head;
        head=temp->next;
        temp->next=NULL;
        free(temp);
    }else
    {
        struct node *p=head,*q;
        int i=1;
        while(i<loc-1)
        {
            p->next;
            i++;
        }
        q=p->next;
        p->next=q->next;
        q->next=NULL;
        free(q);

    }
   }


