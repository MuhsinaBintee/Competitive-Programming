#include<bits/stdc++.h>
using namespace std;
bool checkAnagram(string s1,string s2,int l1,int l2){
  string s= s1+s2;
  map<char,int>mp;
  if(l1==l2){
    for(int i=0;i<2*l1;i++){
        mp[s[i]]++;
    }
    for(auto it :mp){
        if((it.second)%2!=0){
            return false;
        }
        else{
            return true;
        }
    }
  }
  return false;
}
int main(){
string s1,s2;
cin>>s1>>s2;
int l1,l2;
l1=s1.size();
l2=s2.size();
if(checkAnagram(s1,s2,l1,l2)){
    cout<<"Two strings are anagrams each other"<<endl;
}else{
   cout<<"Two strings are not anagrams each other"<<endl;
}
return 0;
}
