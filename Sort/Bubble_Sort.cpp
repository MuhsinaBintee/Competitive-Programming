#include<bits/stdc++.h>
using namespace std;
void BubbleSort(int a[],int n){
    int temp;
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
        if(a[j]>a[j+1]){
            temp = a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
  }
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
}
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
BubbleSort(a,n);
return 0;
}
