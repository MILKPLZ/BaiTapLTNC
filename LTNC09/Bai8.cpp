#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n/2;i++)
    {
        int m=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=m;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }


}

