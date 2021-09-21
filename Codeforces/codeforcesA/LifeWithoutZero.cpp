#include<bits/stdc++.h>
using namespace std;
int remZero(int n){
int num=0,p=1,d;
while(n!=0){
    d=n%10;
    n=n/10;
    if(d!=0){
        num=num+d*p;
        p=p*10;
    }
}
return num;

}
int main(){
int a,b,c,A,B,C;
cin>>a>>b;
c=a+b;
A=remZero(a);
B=remZero(b);
C=remZero(c);
cout<<(A+B==C?"YES":"NO")<<endl;

return 0;
}
