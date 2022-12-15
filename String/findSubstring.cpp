#include<bits/stdc++.h>
using namespace std;
bool findSubstring(string str,string sub_str)
{
    int i=0;
    int j=0;
    while(str[j]!='\0' || sub_str[i]!='\0')
    {
        if(str[j]!=sub_str[i])
        {
            j++;
            i=0;
        }
        else
        {
            j++;
            i++;
        }

    }
    if(sub_str[i]=='\0')
        return true;
    return false;
}
int main()
{
    string str,sub_str;
    cin>>str>>sub_str;
    if(findSubstring)
    {
        cout<<"Find substring in string"<<endl;
    }
    else
    {
        cout<<"Not find substring in string"<<endl;
    }
    return 0;
}
