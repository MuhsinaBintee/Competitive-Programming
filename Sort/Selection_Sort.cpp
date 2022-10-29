#include<bits/stdc++.h>
using namespace std;
void selectionSort(int a[],int n){
 int Min,pos;
 for(int i=0;i<n;i++){
    int Min=a[i];
    pos=i;
    for(int j=i+1;j<n;j++){
        if(a[j]<Min){
            Min=a[j];
            pos=j;
        }
    }
    swap(a[i],a[pos]);
 }
 for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
 }
}

int main(){
int a[] = {6,4,2,8,7,0,5};
int n= sizeof(a)/sizeof(a[0]);
selectionSort(a,n);

return 0;
}
