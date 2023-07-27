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
void preOrder( struct Node * root){
   if(root==NULL) return ;
   stack<struct Node*>s;
   s.push(root);
   while(!s.empty()){
    struct Node* curr=s.top();
    s.pop();
    cout<<curr->data<<" ";
    if(curr->right){
        s.push(curr->right);
    }
    if(curr->left){
        s.push(curr->left);
    }
   }
}
void postOrder(struct Node* root){
    if(root==NULL) return;
    stack<struct Node*>s;
    s.push(root);
    stack<int>out;
    while(!s.empty()){
        struct Node* curr=s.top();
        s.pop();
        out.push(curr->data);

        if(curr->left){
            s.push(curr->left);
        }
        if(curr->right){
            s.push(curr->right);
        }
    }
    while(!out.empty()){
        cout<<out.top()<<" ";
        out.pop();
    }

}
void inorder(struct Node* root){
    stack<struct Node*>s;
    struct Node* curr =root;
    while(!s.empty()|| curr!=NULL){
        if(curr!=NULL){
         s.push(curr);
         curr=curr->left;
      }
      else{
        curr=s.top();
        s.pop();
        cout<<curr->data<<" ";
        curr=curr->right;
      }
    }
}
vector<vector<int>> levelOrder(struct Node* root){
    vector<vector<int>>result;
    queue<struct Node*>q;
    q.push(root);
    if(root==NULL) return result;
    while(!q.empty()){
        vector<int>v;
        int len=q.size();
        for(int i=0;i<len;i++){
            struct Node* curr=q.front();
            v.push_back(curr->data);
            if(curr->left!=NULL) q.push(curr->left);
            if(curr->right!=NULL) q.push(curr->right);
            q.pop();
            }
            result.push_back(v);
    }
}

int main(){
   struct Node * root =createBinaryTree();
   printf("%d\n",root->data);
   preOrder(root);
   cout<<endl;
   postOrder(root);
   cout<<endl;
   inorder(root);
    cout<<endl;
   vector<vector<int>>v=levelOrder(root);
   for(int i=0;i<v.size();i++){
    for(int j=0;j<v[i].size();j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
   }
return 0;
}


