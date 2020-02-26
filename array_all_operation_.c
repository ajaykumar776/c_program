#include<stdio.h>
void insert_beginnig(int n1 ,int ar[] );
void insert_end(int n1,int ar[]);
void insert_any(int n1,int ar[]);
void delete_beginning(int n1,int ar[]);
void delete_end(int n1,int ar[]);
void delete_any(int n1,int ar[]);
void main()
{
    int a,n1=6,n;
    int ar[10]={1,2,3,4,5,6};
    printf("1.insert at beginning :\n");
    printf("2.insert at end :\n");
    printf("3.insert at any positon :\n");
    printf("4.delete at beginning :\n");
    printf("5.delete at end :\n");
    printf("6.delete at any positon :\n");
    printf("\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        insert_beginnig(n1,ar); 
        break;
        case 2:
        insert_end(n1,ar);
        break;
        case 3:
        insert_any(n1,ar);
        break;
        case 4:
        delete_beginning(n1,ar); 
        break;
        case 5:
        delete_end(n1,ar);
        break;
        case 6:
        delete_any(n1,ar);
        break;
        default:  
        break;
         
        }

        
}
void insert_beginnig(int n1,int ar[])
{
    int i,a;
    printf("enter the value of a_ : \n");
    scanf("%d",&a);
    for(i=n1-1;i>=0;i--){
        ar[i+1]=ar[i];
    }
    ar[i+1]=a;
    n1++;
    printf("new array element \n");
    for(i=0;i<n1;i++){
        printf("%d\n",ar[i] );
    }
}
void insert_end(int n1,int ar[])
{
    int i,a;
    printf("enter the value of a_ : \n");
    scanf("%d",&a);
    for(i=0;i<=n1;i++){
        if(i==n1){
            ar[i]=a;
        }
        
    }
    n1++;
        printf("new array element \n");
         for(i=0;i<n1;i++){
        printf("%d\n",ar[i] );
    }
}

void insert_any(int n1,int ar[])
{
    int i,a,pos;
    printf("enter the value of a_ : \n");
    scanf("%d",&a);
    printf("enter the position : \n");
    scanf("%d",&pos);

    for(i=n1-1;i>=pos;i--){
        ar[i+1]=ar[i];       
    }
    ar[i+1]=a;
    n1++;
    printf("new array element \n");
    for(i=0;i<n1;i++){
        printf("%d\n",ar[i] );
    }
    

}
 void delete_beginning(int n1,int ar[])
 {
    int i;
    for(i=0;i<n1-1;i++){
        ar[i]=ar[i+1];
    }
    n1--;
     printf("new array element \n");
    for(i=0;i<n1;i++){
        printf("%d\n",ar[i] );
    }
    

 }

 void delete_end(int n1,int ar[])
 {
    int i;
    printf("new array element \n");
    for(i=0;i<n1-1;i++){
        printf("%d\n",ar[i] );
    }

 }
 void delete_any(int n1,int ar[])
 {
    int i,a;
    printf("enter the value of position which position u want to delete : \n");
    scanf("%d",&a);
    for(i=0;i<=n1-1;i++){
        if(i>=a){
            ar[i]=ar[i+1];
        }
    }
    n1--;
      printf("new array element \n");
    for(i=0;i<n1;i++){
        printf("%d\n",ar[i] );
    }
 }

