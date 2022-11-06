#include<bits/stdc++.h>
using namespace std;

void insertionSort(int *A,int n){
   for(int i=1;i<n;i++){
   int value=A[i];
    int hole=i;
    while(hole>0 && A[hole-1]>value){
        A[hole]=A[hole-1];
        hole = hole-1;
    }
    A[hole]=value;
   }

}

int main()
{
    /*int l;
    cin>>l;
    int a[l];
    for(int i=0; i<l; i++)
    {
        cin>>a[i];
    }*/
    int A[]={7,2,4,1,5,3};
    int n= sizeof(A)/sizeof(A[0]);
    insertionSort(A,n);
    for(int i=0;i<n;i++){
     cout<<A[i]<<" ";
    }

    return 0;
}
