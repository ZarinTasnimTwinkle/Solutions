#include<iostream>
using namespace std;
int main()
{
    int a[5];
    for(int i=0;i<6;i++)
        cin>>a[i];
    int king= 1-a[0];
    int queen= 1-a[1];
    int rooks= 2-a[2];
    int bishops= 2-a[3];
    int knights= 2-a[4];
    int pawns= 8-a[5];
    cout<<king<<" "<<queen<<" "<<rooks<<" "<<bishops<<" "<<knights<<" "<<pawns<<endl;
}
