#include<iostream>
using namespace std;
int main()
{
    int h,m;
    cin>>h>>m;
    if(h==0)
    {
        int in=(24*60)+m;
        int op=in-45;
        cout<<op/60<<" "<<op%60<<endl;
    }
    else
    {
        int in=(h*60)+m;
        int op=in-45;
        cout<<op/60<<" "<<op%60<<endl;
    }
}
