#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,cnt=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                cout<<a[j]<<endl;
                cnt++;
            }
        }
    }
    cout<<"Total duplicate element "<<cnt<<endl;


return 0;
}

