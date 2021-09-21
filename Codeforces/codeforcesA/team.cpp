#include<bits/stdc++.h>
using namespace std;
int main(){
int n,v,p,t,cnt=0;
cin>>n;
for(int i=1;i<=n;i++){
    int sum=0;
    cin>>v>>p>>t;
    sum=v+p+t;
    if(sum>=2){
        cnt++;
    }

}

cout<<cnt<<endl;

return 0;
}
