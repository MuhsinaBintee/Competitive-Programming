#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
}*head;
void CreateLinkedList(int n)
{
    struct Node* temp,*current;
    head=(struct Node*)malloc(sizeof(struct Node*));
    int num;
    cin>>num;
    head->data=num;
    head->next=NULL;
    temp=head;
    for(int i=2; i<=n; i++)
    {
        cin>>num;
        current=(struct Node*)malloc(sizeof(struct Node*));
        current->data=num;
        current->next=NULL;
        temp->next=current;
        temp=temp->next;
    }


}
void middleElement()
{
    struct Node*slow,*fast;
    slow=head;
    fast=head;
    while(fast!=NULL &&fast->next!=NULL)
    {

        slow=slow->next;
        fast=fast->next->next;

    }
    cout<<slow->data<<endl;

}
void display()
{
    struct Node* temp;
    temp=head;
    while(temp->next!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}
int main()
{
    int n;
    cin>>n;
    CreateLinkedList(n);
    display();
    middleElement();
    return 0;
}

