#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    string word;
    cin>>word;
    int len = word.size();
    if(len>10){
        cout<<word[0]<<len-2<<word[len-1]<<endl;
    }else{

        cout<<word<<endl;
    }
}

return 0;
}
