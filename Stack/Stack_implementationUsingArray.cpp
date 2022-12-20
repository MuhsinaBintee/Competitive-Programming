#include<bits/stdc++.h>
#define Mx_size 100
using namespace std;
int s[Mx_size];
int top=-1;
void push(int a){
    if(top==Mx_size){
        cout<<"Error : Stack overflow"<<endl;
        return;
    }else{
        s[++top]=a;
    }
}
void pop(){
   if(top== -1){
    cout<<"Error : Stack underflow"<<endl;
    return;
   }else{
     top--;
   }
}
int top(){
  if(top==-1){
    cout<<"Stack is empty"<<endl;
    return;
  }
    return s[top];

}
void print(){
  for(int i=0;i<=top;i++){
    cout<<s[i]<<endl;
  }
}
int main(){
    push(2);
    print();
    push(5);
    print();
    push(10);
    print();
    pop();
    print();
    top();
    print();
    push(12);
    print();

}
