#include<bits/stdc++.h>
using namespace std;

int Partition(int *a,int Start,int End){
  int pivot= a[End];
  int p_index = Start;
  for(int i=Start;i<End;i++){
    if(a[i]<=pivot){
        swap(a[i],a[p_index]);
        p_index++;
    }
  }
 swap(a[p_index],a[End]);
 return p_index;
}

void QuickSort(int *a,int Start,int End){
  if(Start<End){
    int p_index = Partition(a,Start,End);
    QuickSort(a,Start,p_index-1);
    QuickSort(a,p_index+1,End);
  }
}

int main(){
/*int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}*/
int a[]={7,2,1,6,8,5,3,4};
int n=sizeof(a)/sizeof(a[0]);
QuickSort(a,0,n-1);
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
return 0;
}
