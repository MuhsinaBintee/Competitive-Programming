#include<bits/stdc++.h>
using namespace std;
struct Node{
  int data;
  struct Node* left;
  struct Node* right;
};
struct Node* createNode(int value){
   struct Node * newNode= (struct Node*)malloc(sizeof(struct Node));
   newNode->data=value;
   newNode->left=NULL;
   newNode->right=NULL;

   return newNode;
};

void add_leftChild(struct Node* root,struct Node*child){
   root->left=child;
}
void add_rightChild(struct Node* root,struct Node*child){
   root->right=child;
}
struct Node* createBinaryTree(){
   struct Node* two = createNode(2);
   struct Node* nine = createNode(9);
   struct Node* seven = createNode(7);
   add_leftChild(two,seven);
   add_rightChild(two,nine);
   struct Node* one = createNode(1);
   struct Node* ten = createNode(10);
   add_leftChild(seven,one);
   add_rightChild(seven,ten);
   return two;
}
int main(){
   struct Node * root =createBinaryTree();
   printf("%d\n",root->data);
return 0;
}
