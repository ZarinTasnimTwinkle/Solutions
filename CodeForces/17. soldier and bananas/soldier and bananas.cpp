#include<iostream>
using namespace std;
int main()
{
    int k,n,w,i,total_peyment=0;
    cin>>k>>n>>w;

    for(i=1; i<=w; i++)
		total_peyment = total_peyment+(i*k);

	if(total_peyment<= n){
		cout <<0<<endl;
	}
	else cout <<total_peyment - n << "\n";
}
