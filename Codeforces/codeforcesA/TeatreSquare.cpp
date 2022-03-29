#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,z;
    cin>>n>>m>>a;
    double x=ceil(n/(double)a);
    double y= ceil(m/(double)a);
    z=x*y;
    cout<<z<<endl;
    return 0;
}
