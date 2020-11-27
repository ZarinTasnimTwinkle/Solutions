#include<iostream>
using namespace std;
int main()
{
    int a,b,i,n,passengers_exist=0,bus_capacity=0;
    cin>>n;

    for(int i=0;i<n;i++)
        {
		 int a,b;
		 cin>>a>>b;

		 passengers_exist -= a;
		 passengers_exist += b;

		 bus_capacity = max(bus_capacity, passengers_exist);

        }
        cout<<bus_capacity<<endl;
}
