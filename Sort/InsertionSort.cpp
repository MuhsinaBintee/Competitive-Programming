#include<bits/stdc++.h>
using namespace std;

void insertionSort(int a[],int n)
{
    int key,j;
    for(int i=1; i<n; i++)
    {
        key=a[i];
        for(j=i-1; j>=0; j--)
        {
            if(key<a[j])
            {
                a[j+1]=a[j];
            }
            else
            {
                break;
            }
        }
        a[j+1]=key;
    }
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

}

int main()
{
    int l;
    cin>>l;
    int a[l];
    for(int i=0; i<l; i++)
    {
        cin>>a[i];
    }
//int n=sizeof(a)/sizeof(a[0]);
    insertionSort(a,l);
    return 0;
}
