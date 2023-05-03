#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int cnt;
for(int i=0;i<n;i++){
        cnt=0;
    for(int j=0;j<n;j++){
        if(i!=j){
            if(a[i]==a[j]){
                cnt++;
            }
        }
    }
    if(cnt==0){
        cout<<a[i]<<" ";
    }
}



return 0;
}
