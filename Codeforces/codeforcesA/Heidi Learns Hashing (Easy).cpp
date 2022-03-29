#include<bits/stdc++.h>
#define ll long long
using namespace std;
//x  is smallest possible
//x and y two positive integers
//r = x^2 + 2xy + x + 1,
// if x=1,  r= 1*1 + 2* y*1 + 1 +1
//r=2y+3
//y=(r-3)/2
int main(){
ll r;
cin>>r;
int x=1;
ll y = (r-3)/2;
if((2*y)+3==r && y>=1){
    cout<<1<<" "<<y<<endl;
}else{
    cout<<"NO"<<endl;

}
return 0;
}
