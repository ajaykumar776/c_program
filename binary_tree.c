#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *right;
    struct node *left;

}s;
struct node *root=NULL,*snode;
struct node *create(int data)
{
    snode=(struct node*)malloc(sizeof(struct node));
    snode->data=data;
    snode->left=NULL;
    snode->right=NULL;
    printf("your general tree are :\n");
    printf("%d\n",data);
    return snode;

}
int count(struct node *snode)
{
    if(snode==NULL)
    {
        return 0;
    }else
    {
        return count(snode->left)+count(snode->right)+1;
    }
}

int count_leaf(struct node *snode)
   {
    if(snode==NULL)
        return 0;
    else if (snode->left==NULL&&snode->right==NULL)
        return 1;
    else
        return count_leaf(snode->left)+count_leaf(snode->right);
}
int max(int a, int b){
    return (a>b) ? a : b;
}

int height(struct node *snode){
    int left, right;
    if(snode == NULL) return 0;
    else{
          
         return max(height(snode->left), height(snode->right)) + 1;
    }

}
void preorder(struct node *snode)
{
    if(snode!=NULL)
    {
        printf("%d\n",snode->data );
        preorder(snode->left);
        preorder(snode->right);
    }
}
void postorder(struct node *snode)
{
    if(snode!=NULL)
    {
    postorder(snode->left);
    postorder(snode->right);
    printf("%d\n",snode->data );

    }
}
 void inorder(struct node *snode)
{
    if(snode!=NULL)
    {
        inorder(snode->left);
        printf("%d\n",snode->data );
        inorder(snode->right);

    }

}

void main()
{
    root=create(1);
    root->left=create(2);
    root->right=create(3);
    printf("height of the tree    :%d\n",height(root));
    printf("total no of nodes     :%d\n",count(root));
    printf("total leaf nodes are  :%d\n",count_leaf(root));
    printf("INORDER\n");
    inorder(root);
    printf("POSTORDER\n");
    postorder(root);
    printf("PREORDER: \n");
    preorder(root);

}

