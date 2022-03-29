#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll s,x;
cin>>s>>x;
ll cnt=0;
while(s>=x){
    s=s/x;
    cnt++;
}
cout<<cnt+1<<endl;
return 0;
}
