#include<bits/stdc++.h>
using namespace std;
void printArray(int i,int l,int a[]){
    if(i<l){
        cout<<a[i]<<" ";
        printArray(++i,l,a);
    }
}
int main(){
 int n;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 printArray(0,n,a);
 return 0;
}
