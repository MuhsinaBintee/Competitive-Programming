#include<bits/stdc++.h>
using namespace std;
struct Node{
   int data;
   struct Node * next;
}*head;
void CreateLinkedList(int n){
   struct Node * newNode,*temp;
   int num;
   cin>>num;
   head=(struct Node*)malloc(sizeof(struct Node));
   head->data=num;
   head->next=NULL;
   temp=head;
   for(int i=1;i<n;i++){
    newNode=(struct Node*)malloc(sizeof(struct Node));
    cin>>num;
    newNode->data=num;
    newNode->next=NULL;

    temp->next=newNode;
    temp=temp->next;
   }
}
void reverseLinkedList(){
   struct Node *preNode=NULL,*currentNode=head,*nextNode=NULL;
   while(currentNode!=NULL){
    nextNode=currentNode->next;
    currentNode->next=preNode;

    preNode=currentNode;
    currentNode=nextNode;
   }
   head=preNode;
}
void display(){

struct Node * temp;
temp=head;
while(temp->next != NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
}
cout<<temp->data<<endl;
}
int main(){
int n;
cin>>n;
CreateLinkedList(n);
display();
reverseLinkedList();
display();
return 0;
}
