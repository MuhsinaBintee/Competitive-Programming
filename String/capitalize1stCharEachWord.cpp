#include<bits/stdc++.h>
using namespace std;
int main(){
char ch[100];
scanf("%[^\n]s",ch);
for(int i=0;ch[i]!='\0';i++){
    if(i==0){
        if(ch[i]>='a' && ch[i]<='z'){
            ch[i]=ch[i]-32;
        }
        continue;
    }
    else if(ch[i]==' '){
        ++i;
        if(ch[i]>='a' && ch[i]<='z'){
            ch[i]=ch[i]-32;
        }
        continue;

    }else{
       if(ch[i]>='A' && ch[i]<='Z'){
            ch[i]=ch[i]+32;
        }
        continue;
    }
}
cout<<ch<<endl;
return 0;
}
