#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
}*head;
void createLinkedList(int n)
{
    struct Node *newNode,*temp;
    head =(struct Node *)malloc(sizeof(struct Node));
    int num;
    cin>>num;
    head->data=num;
    head->next=NULL;
    temp=head;
    for(int i=2; i<=n; i++)
    {
        newNode=(struct Node*)malloc(sizeof(struct Node));
        cin>>num;
        newNode->data=num;
        newNode->next=NULL;

        temp->next=newNode;
        temp=temp->next;
    }


}
void deleteNodeAtBegining()
{
    head=head->next;
}
void deleteNodeAtEnd()
{
    struct Node *PreNode,*LastNode;

    LastNode = head;
    while(LastNode->next!=NULL)
    {
        PreNode = LastNode;
        LastNode=LastNode->next;
    }
    PreNode->next=NULL;
    free(LastNode);
}
void deleteNodeAt_nPosition(int pos)
{
    struct Node * preNode,*temp;
    temp=head;
    if(pos==1)
    {
        head=head->next;
    }
    else
    {
        for(int i=2; i<=pos; i++)
        {
            preNode=temp;
            temp=temp->next;
        }
        preNode->next=temp->next;
        free(temp);
    }

}
void display()
{
    struct Node *temp;
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
    createLinkedList(n);
    display();
    deleteNodeAtBegining();
    display();
    deleteNodeAtEnd();
    display();
    int pos;
    cin>>pos;
    deleteNodeAt_nPosition(pos);
    display();
    return 0;
}
