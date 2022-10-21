#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // Method - 1
    int Max=a[0],Min=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>Max){
            Max=a[i];
        }
        else if(a[i]<Min){
            Min=a[i];
        }
    cout<<"Largest number "<<Max<<endl;
    cout<<"Smallesr number "<<Min<<endl;
    }
    // Method - 2
    /*
      sort(a,a+n);
      cout<<"Largest number "<<a[0]<<endl;
      cout<<"Smallesr number "<<a[n-1]<<endl;

   */
return 0;
}
