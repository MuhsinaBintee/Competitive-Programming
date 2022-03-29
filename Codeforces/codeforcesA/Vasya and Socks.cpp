#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int cnt=1;
while(1){
    n--;
    if(cnt%m==0){
        n++;
    }
    if(n==0){
        break;
    }
    cnt++;
}
    cout<<cnt<<endl;

return 0;
}
