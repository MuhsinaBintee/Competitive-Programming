#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node * next;
}*head;
void CreateLinkedList(int n)
{
    struct Node *temp,*current;
    int num;
    head = (struct Node*)malloc(sizeof(struct Node));
    cin>>num;
    head->data=num;
    head->next=NULL;
    temp = head;
    for(int i=2; i<=n; i++)
    {
        current = (struct Node*)malloc(sizeof(struct Node));
        cin>>num;
        current->data=num;
        current->next=NULL;

        temp->next=current;
        temp=temp->next;

    }
}
void insertNodeBegining(int num)
{
    struct Node * newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data= num;
    newNode->next= head;
    head= newNode;
}
void insertNodeAtEnd(int num)
{
    struct Node * newNode,*temp;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data=num;
    newNode->next=NULL;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
}
void display()
{
    struct Node *temp;
    temp=head;
    while(temp->next != NULL)
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
    int headNode;
    cin>>headNode;
    insertNodeBegining(headNode);
    display();
    int newNode;
    cin>>newNode;
    insertNodeAtEnd(newNode);
    display();
    return 0;
}
