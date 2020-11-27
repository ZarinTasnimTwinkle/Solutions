#include<iostream>
using namespace std;

int main()
{
    string s, say="hello";
    //char say[5]={'h','e','l','l','o'};
    int j=0,count=0;
    cin>>s;
    for(int i=0; i<s.size(); i++)
        {
            if(s[i]==say[j])
                {
                    j++;
                    count++;
                if(count==5)
                    break;
                }
        }
    if(count==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
