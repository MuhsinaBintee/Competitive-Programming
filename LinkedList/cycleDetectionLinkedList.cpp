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
  head=(struct Node*)malloc(sizeof(struct Node));
  head->data=num;
  head->next=NULL;
  temp=head;
  for(int i=1;i<n;i++){
     cin>>num;
     newNode=(struct Node*)malloc(sizeof(struct Node));
     newNode->data=num;
     newNode->next=NULL;
     temp->next=newNode;
     temp=temp->next;


  }
  temp->next=head;

}
void display(){
 struct Node *temp=head;
 while(temp->next !=head){
    cout<<temp->data<<"->";
    temp=temp->next;
 }
 cout<<temp->data<<endl;

}
void cycleDetection(){
  struct Node * slow,*fast;
  slow=head;
  fast=head;
  while(fast->next!=NULL && fast->next->next != NULL){
        slow=slow->next;
  fast=fast->next->next;
    if(slow==fast){
        cout<<"contains a loop"<<endl;
        return;
    }
  }
  cout<<"no loop "<<endl;
}



int main(){
int n;
cin>>n;
createLinkedList(n);
display();
cycleDetection();

return 0;
}

