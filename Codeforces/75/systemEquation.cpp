#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,cnt=0;
cin>>n>>m;
for(int a=0;a*a<=n&&a<=m;a++){
     int b=n-a*a;
     if(b<0) continue;
    if(a+b*b==m){
        cnt++;
    }
}
cout<<cnt<<endl;
return 0;
}
