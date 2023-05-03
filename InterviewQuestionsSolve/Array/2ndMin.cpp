#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}

int Min=INT_MAX;
int scndMin=INT_MAX;
for(int i=0;i<n;i++){
    if(a[i]<Min){
        scndMin=Min;
        Min=a[i];
    }
    else if(a[i]<scndMin && a[i]!=Min){
        scndMin=a[i];
    }
}
cout<<scndMin<<endl;

return 0;
}
