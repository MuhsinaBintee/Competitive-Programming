#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if((a==b)&&(b==c)&&(c==d))
    {
        cout<<3<<endl;
    }
    else if((a==b&&a==c)||(a==b&&a==d)||(a==b&&c==d)||(a==c&&a==d)||(a==c&&b==d)||(a==d&&b==d)||(b==c&&b==d)||(a==d&&b==c))
    {
        cout<<2<<endl;
    }
    else if((a==b)||(a==c)||(a==d)||(b==c)||(a==d)||(b==d)||(c==d))
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<0<<endl;
    }

    return 0;
}
