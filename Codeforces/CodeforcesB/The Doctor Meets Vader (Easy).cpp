#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll s,b;
cin>>s>>b;
ll a[s];
for(ll i =0;i<s;i++){
    cin>>a[i];
}
pair<ll,ll>base[b];
ll d,g;
for(ll i =0;i<b;i++){
    cin>>d>>g;
    base[i]={d,g};
}
sort(base, base+b);
for(ll i=1;i<b;i++){
    base[i].second+=base[i-1].second;
}
ll mini,maxi,mid;
for(ll i =0;i<s;i++){
    d=a[i];
    if(d<base[0].first){
        cout<<0<<" ";
        continue;
    }
    mini = 0;
    maxi = b;
    while(maxi-mini>1){
            mid=(maxi+mini)/2;
    if(base[mid].first>d){
        maxi=mid;
    }else{
        mini=mid;
    }

    }
    cout<<base[mini].second<<" ";
}
return 0;
}
