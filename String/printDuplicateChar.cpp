#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
unordered_map<char,int>mp;
for(int i=0;i<s.size();i++){
    mp[s[i]]++;
}
for(auto it:mp){
    if(it.second==2){
        cout<<it.first<<endl;
    }
}
return 0;
}
