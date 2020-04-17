#include<stdio.h>
#include<stdlib.h>

typedef struct node{
  int data;
  struct node *left, *right;
} btree;
btree *root, *snode;

struct node* create(int data){
    snode = (struct node*)malloc(sizeof(struct node));
    snode->data = data;
    snode->left = NULL;
    snode->right = NULL;

    return snode;
}

int count(struct node *snode){
  if(snode == NULL) return 0;
  else return count(snode->left) + count(snode->right) + 1;
}

int count_leaf(struct node *snode){
  if(snode == NULL) return 0;
  else if(snode->left == NULL && snode->right == NULL) return 1;
  else return count_leaf(snode->left) + count_leaf(snode->right);
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

void delete(struct node *snode){
  if(snode != NULL){
    delete(snode->left);
    delete(snode->right);
    free(snode);
  }
}

void newline(){
  printf("\n");
}

void preorder(struct node *snode){
  if(snode != NULL){
    printf("%d ", snode->data);
    preorder(snode->left);
    preorder(snode->right);
  }
}

void inorder(struct node *snode){
  if(snode != NULL){
    inorder(snode->left);
    printf("%d ", snode->data);
    inorder(snode->right);
  }
}

void postorder(struct node *snode){
  if(snode != NULL){
    postorder(snode->left);
    postorder(snode->right);
    printf("%d ", snode->data);
  }
}

void main(){
  root = NULL;

  // creation of tree
  root = create(1);
    root->left = create(2);
    root->right = create(3);
  printf("total node %d\n", count(root));
  printf("total leaf node %d\n", count_leaf(root));
  printf("height of tree is %d\n", height(root));
  // delete(root);
  //preorder(root);
  
}