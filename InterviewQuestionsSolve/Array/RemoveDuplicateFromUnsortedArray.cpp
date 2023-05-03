
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
    sort(a,a+n);
    RemoveDuplicates(a,n);
    return 0;
}
//method 2
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}

for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(a[i]==a[j]){
            swap(a[j],a[n-1]);
            n--;
        }
    }
}
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}

return 0;
}
*/
