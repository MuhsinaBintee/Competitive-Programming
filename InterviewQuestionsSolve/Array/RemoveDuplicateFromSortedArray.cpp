
#include<bits/stdc++.h>
using namespace std;
void RemoveDuplicates(int a[],int n)
{
    int key = a[0];
    int j=0;
    for(int i=1; i<n; i++)
    {
        if(key != a[i])
        {
            a[j++]=key;
            key=a[i];
        }
    }
    a[j++]=key;
    for(int i=0; i<j; i++)
    {
        cout<<a[i]<<" ";
    }

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
   
    RemoveDuplicates(a,n);
    return 0;
}
