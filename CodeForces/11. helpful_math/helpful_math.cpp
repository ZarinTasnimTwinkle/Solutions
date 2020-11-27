#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i,l,j;
    char n[100];
    cin>>n;
    l=strlen(n);

    for(i=0;i<l;i+=2)
    {
        for(j=0;j<l-i-2;j+=2)
        {
            if(n[j]>n[j+2])
            swap(n[j], n[j+2]);
        }
    }

    cout<<n;

    return 0;
}