#include<bits/stdc++.h>
using namespace std;
struct Node{
   int data;
   struct Node * next;
}*head;
void createLinkedList(int n){
   struct Node *newNode,*temp;
   int num;
   cin>>num;
   head = (struct Node*)malloc(sizeof(struct Node));
   head->data=num;
   head->next=NULL;
   temp= head;
   for(int i=2;i<=n;i++){
    newNode=(struct Node*)malloc(sizeof(struct Node));
        cin>>num;
        newNode->data=num;
        newNode->next=NULL;

        temp->next=newNode;
        temp=temp->next;
   }
}
void display(){
  struct Node *temp;
  temp=head;
  while(temp->next!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
  }
  cout<<temp->data<<endl;
}
int SearchNode(int item){
  int index=1;
  struct Node *temp;
  temp=head;
  while(temp->next!=NULL){
    if(temp->data==item){
        return index;
    }
    temp=temp->next;
    index++;
  }
  return -1;
}
int main(){
int n;
cin>>n;
createLinkedList(n);
display();
int item;
cin>>item;
int pos = SearchNode(item);
cout<<pos<<endl;
return 0;
}
