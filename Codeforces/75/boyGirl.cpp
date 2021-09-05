#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=0;
    string a;
    cin>>a;
    set<char>s;
    for(int i = 0; i<a.size(); i++)
    {
        s.insert(a[i]);
    }
    set<char> :: iterator it;
    for(it=s.begin(); it!=s.end(); it++)
    {
        n++;
    }
    if(n%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!"<<endl;
    }

    return 0;
}
