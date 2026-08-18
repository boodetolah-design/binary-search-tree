#include <stdio.h>
#include <stdlib.h>
#include<cs50.h>
typedef struct node{
    int number;
    struct node *left;
    struct node *right;
}node;
int search(node* tree, int number);
void free_tree(node* tree);
int main(void){
  node* tree = NULL;
  node* n =NULL;
  n = malloc(sizeof(node));
  if(n == NULL){
    return 1;
  }
  n->number=6;
  n->left=NULL;
  n->right=NULL;
 tree= n;
  n =malloc(sizeof(node));
if(n ==NULL){
    return 1;
}
n->number=5;
n->left=NULL;
n->right=NULL;
tree->left=n;
  n =malloc(sizeof(node));
if(n ==NULL){
    return 1;
}
n->number=4;
n->left=NULL;
n->right=NULL;
tree->left->left=n;
n=malloc(sizeof(node));
if(n ==NULL){
    return 1;
}
n->number=3;
n->left=NULL;
n->right=NULL;
tree->left->left->left=n;
n =malloc(sizeof(node));
    if(n==NULL){
        return 1;
    }
n->number=2;
n->left=NULL;
n->right=NULL;
tree->left->left->left->left=n;
n=malloc(sizeof(node));
if(n ==NULL){
    return 1;
}
n->number=1;
n->left=NULL;
n->right=NULL;
tree->left->left->left->left->left=n;
n=malloc(sizeof(node));
if(n ==NULL){
    return 1;
}
 n->number=7;
  n->left=NULL;
  n->right=NULL;
 tree->right= n;
  n =malloc(sizeof(node));
if(n ==NULL){
    return 1;
}
n->number=8;
n->left=NULL;
n->right=NULL;
tree->right->right=n;
  n =malloc(sizeof(node));
if(n ==NULL){
    return 1;
}
n->number=9;
n->left=NULL;
n->right=NULL;
tree->right->right->right=n;
n=malloc(sizeof(node));
if(n ==NULL){
    return 1;
}
n->number=10;
n->left=NULL;
n->right=NULL;
tree->right->right->right->right=n;
n =malloc(sizeof(node));
    if(n==NULL){
        return 1;
    }
n->number=11;
n->left=NULL;
n->right=NULL;
tree->right->right->right->right->right=n;
n=malloc(sizeof(node));
if(n ==NULL){
    return 1;
}
n->number=12;
n->left=NULL;
n->right=NULL;
tree->right->right->right->right->right->right=n;
n=malloc(sizeof(node));
if(n ==NULL){
    return 1;
}
search(tree,get_int("number:"));
search(tree, get_int("number:"));
free_tree(tree);
}
int search(node* tree, int number){
    if(tree == NULL){
        printf("not found\n");
        return 1;
    }
    else if(number<tree->number){
        printf("go lift\n");
    return search(tree->left,number);
    }else if(number>tree->number){
        printf("go right\n");
        return search(tree->right,number);
    }
else {
    printf("found\n");
    return 0;
} 


}

void free_tree(node* tree)
{
    if (tree == NULL)
    {
        return;
    }
    free_tree(tree->left);
    free_tree(tree->right);
    free(tree);
}