#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int ans=0;
    int i=0;
    int l=n-1;
    while(i<=l){
        ans+=a[l]-a[i];
        i++;
        l--;
    }
    cout<<ans<<endl;
}
return 0;
}
