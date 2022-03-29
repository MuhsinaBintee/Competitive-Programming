#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    gets(s);
    for(int i=0; i<strlen(s); i++)
    {
        if((s[i]>='a' && s[i]<='z')&&(s[i]!='a' &&  s[i]!='e' &&  s[i]!='i' && s[i]!='o' &&  s[i]!='u' && s[i]!='y' ))
        {
           printf(".%c",s[i]);
        }else if((s[i]>='A' && s[i]<='Z')&& (s[i]!='Y'  && s[i]!='A' &&  s[i]!='E' &&  s[i]!='I' && s[i]!='O' &&  s[i]!='U')){

          printf(".%c",s[i]+32);
        }
    }

cout<<endl;


    return 0;

}

