#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int val)
{
    Node* node = new Node();
    node->data=val;
    node->left=NULL;
    node->right=NULL;
    return node;
}
Node* Insert(Node* root,int data)
{
    if(root==NULL) root=createNode(data);
    else if(data<= root->data)
    {

        root->left=Insert(root->left,data);
    }
    else
    {
        root->right=Insert(root->right,data);
    }
    return root;
}

int FindMax(Node* root){
   if(root==NULL){
     cout<<"Tree is empty"<<endl;
     return -1;
   }
   else if(root->right==NULL){
     return root->data;
   }
   return FindMax(root->right);
}
int main()
{
    Node* root = new Node();
    root = NULL;
    root=Insert(root,15);
    root=Insert(root,10);
    root=Insert(root,20);
    root=Insert(root,25);
    root=Insert(root,8);
    root=Insert(root,12);
    
    cout<<FindMax(root)<<endl;
    return 0;
}
