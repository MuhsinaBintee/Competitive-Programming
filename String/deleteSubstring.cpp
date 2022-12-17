#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[50],subStr[50],newStr[50];
    cout<<"Enter a string : ";
    gets(str);
    cout<<"Enter a substring : ";
    gets(subStr);
    int i,j=0,k=0,n=0;
    int flag=0;
    for(i=0; str[i]!='\0'; i++)
    {
        k=i;
        while(str[i]==subStr[j])
        {
            i++;
            j++;
            if(j==strlen(subStr))
            {
                flag=1;
                break;
            }
        }
        j=0;
        if(flag==0)
        {
            i=k;
        }
        else
        {
            flag=0;
        }
        newStr[n++]=str[i];
    }
    newStr[n]='\0';
    cout<<"After deleting substring : ";
    for(int l=0; l<strlen(newStr); l++)
    {
        cout<<newStr[l];
    }
    cout<<endl;
    return 0;
}
