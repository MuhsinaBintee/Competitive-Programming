#include<bits/stdc++.h>
using namespace std;
int main(){
int n,total;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
total=((n+1)*(n))/2;
for(int i=0;i<n;i++){

   total-=a[i];
}

cout<<total<<endl;

return 0;
}
