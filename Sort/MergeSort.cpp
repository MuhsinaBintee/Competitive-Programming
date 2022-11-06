#include<bits/stdc++.h>
using namespace std;

void Merge(int *A,int *L,int nL,int *R,int nR)
{
    int i,j,k;
    i=j=k=0;
    while(i<nL && j<nR)
    {
        if(L[i]<=R[j])
        {
            A[k]=L[i];
            k++;
            i++;
        }
        else
        {
            A[k]=R[j];
            k++;
            j++;
        }
    }
    while(i<nL)
    {
        A[k]=L[i];
        k++;
        i++;
    }

    while(j<nR)
    {
        A[k]=R[j];
        k++;
        j++;
    }
}

void MergeSort(int *A,int n)
{
    int i,mid, *L,*R;
    mid=n/2;
    if(n<2)
        return;
    L = (int*)malloc(mid*sizeof(int));
    R = (int*)malloc((n-mid)*sizeof(int));
    for(i=0; i<mid; i++)
    {
        L[i]=A[i];
    }
    for(i=mid; i<n; i++)
    {
        R[i-mid]=A[i];
    }
    MergeSort(L,mid);
    MergeSort(R,n-mid);
    Merge(A,L,mid,R,n-mid);
}

int main()
{
    int A[] = {7,2,1,6,8,5,3,4};
    int n = sizeof(A)/sizeof(A[0]);
    MergeSort(A,n);
    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }
    return  0;
}
