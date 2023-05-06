#include<bits/stdc++.h>
using namespace std;
void reverseString(string &s,int Start,int End){
  if(Start>=End) return;
  swap(s[Start],s[End]);
  reverseString(s,++Start,--End);
}
int main(){
string s;
cin>>s;
int Start=0;
int End=s.size()-1;
reverseString(s,Start,End);
cout<<s<<endl;
return 0;
}
