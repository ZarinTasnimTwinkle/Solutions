#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,i,a[100],sum=0,ans=0,count=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sum=sum/2;
    sort(a,a+n);
        while(ans<=sum)
        {
            ++count;
            ans+=a[n-count];
        }
    cout<<count<<endl;
    return 0;
}
