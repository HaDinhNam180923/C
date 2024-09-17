#include<stdio.h>
#include<stdlib.h>

// duyet theo thu tu giua

struct node{
   int data;
   struct node *left;
   struct node *right;
};

 

struct node *root = NULL;

 

void insert(int data){
   struct node *tempNode = (struct node*) malloc(sizeof(struct node));
   struct node *current;
   struct node *parent;
   tempNode->data = data;
   tempNode->left = NULL;
   tempNode->right = NULL;

 

   //if tree is empty
   if(root == NULL) {
      root = tempNode;
   }
   else{
      current = root;
      parent = NULL;
      while(1) {
         parent = current;

 

         //go to left of the tree
         if(data < parent->data) {
            current = current->left;

 

            //insert to the left
            if(current == NULL) {
               parent->left = tempNode;
               return;
            }
         }//go to right of the tree
         else{
            current = current->right;
            //insert to the right
            if(current == NULL) {
               parent->right = tempNode;
               return;
            }
         }
      }
   }
}

 

void inorder_traversal(struct node* root){
   if(root != NULL) {
      inorder_traversal(root->left);
      printf("%d ",root->data);
      inorder_traversal(root->right);
   }
}

 
int main(){
    int i;
    int array[7] = { 27, 14, 35, 10, 19, 31, 42 };
    for(i = 0; i < 7; i++) insert(array[i]);
    printf("\nIn-order traversal: ");
    inorder_traversal(root);
    return 0;
}