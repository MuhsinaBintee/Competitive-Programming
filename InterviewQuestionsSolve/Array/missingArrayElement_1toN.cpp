#include<bits/stdc++.h>
using namespace std;
//Method :1
/*int getMissing(int a[],int n){
int total=((n+1)*(n))/2;
for(int i=0;i<n-1;i++){

   total-=a[i];
}
return total;
}*/
// Method :2
/*
int getMissing(int a[],int n){
int total=1;
for(int i=2;i<=n+1;i++){
   total+=i;
   total-=a[i-2];
}
return total;
}
*/
//metod:03
/*int getMissing(int a[],int n){
int right=n,left=0,mid;
//sort(a,a+n);
while(left<right){
        mid = (left + right)/2;
        if(a[mid]>mid) right = mid;
        else left = mid+1;
    }
return left;
}*/
//Method : 4
/*void printMissingElement(int a[],int n)
{
     int diff = arr[0] - 0;

    for (int i = 0; i < N; i++) {

        // Check if diff and arr[i]-i
        // both are equal or not
        if (arr[i] - i != diff) {

            // Loop for consecutive
            // missing elements
            while (diff < arr[i] - i) {
                cout << i + diff << " ";
                diff++;
            }
        }
    }

}*/
// Method: 4
// XOR

int getMissing(int a[], int n)
{
    // For xor of all the elements in array
    int x1 = a[0];

    // For xor of all the elements from 1 to n+1
    int x2 = 1;

    for (int i = 1; i < n; i++)
        x1 = x1 ^ a[i];

    for (int i = 2; i <= n + 1; i++)
        x2 = x2 ^ i;

    return (x1 ^ x2);
}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

//printMissingElement(a,n);
cout<<getMissing(a,n);

    return 0;
}
