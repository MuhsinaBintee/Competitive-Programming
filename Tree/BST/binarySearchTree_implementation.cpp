#include<bits/stdc++.h>
using namespace std;
struct Node{
   int data;
   Node* left;
   Node* right;
};

Node* createNode(int val){
   Node* node = new Node();
   node->data=val;
   node->left=NULL;
   node->right=NULL;
   return node;
}
Node* Insert(Node* root,int data){
   if(root==NULL) root=createNode(data);
   else if(data<= root->data){

    root->left=Insert(root->left,data);
   }
   else{
    root->right=Insert(root->right,data);
   }
   return root;
}
bool Search(Node*temp,int data){
  if(temp==NULL) return false;
  else if(data==temp->data) return true;
  else if(data<=temp->data){

    return Search(temp->left,data);
  }
  else{

    return Search(temp->right,data);
  }
}
int main(){
 Node* root = new Node();
 root=Insert(root,15);
 root=Insert(root,10);
 root=Insert(root,20);
 root=Insert(root,25);
 root=Insert(root,8);
 root=Insert(root,12);
 int num;
 cin>>num;
 if(Search(root,num)==true) cout<<"Found\n";
 else cout<<"Not Found\n";
 return 0;
}

