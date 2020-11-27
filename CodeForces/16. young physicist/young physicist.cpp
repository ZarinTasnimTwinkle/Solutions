#include <iostream>
using namespace std;
int main()
{
    int n,x,y,z, sum_of_x=0, sum_of_y=0, sum_of_z=0;
    cin>>n;

    while(n--)
    {
        cin >>x>>y>>z;
        sum_of_x += x;
        sum_of_y += y;
        sum_of_z += z;
    }
    cout<<"x= "<<sum_of_x<<endl<<"y= "<<sum_of_y<<endl<<"z= "<<sum_of_z<<endl;

    if (sum_of_x==0 && sum_of_y==0 && sum_of_z==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
