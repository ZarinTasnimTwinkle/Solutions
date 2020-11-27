#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    //cout << "Enter string \n";
    cin>>s;
    //cout<<s<<endl;
    int l= s.length();
    for(unsigned int i=0;i<l;i++)
  {
    char ch = s[i]; //holds current character
    for(unsigned int j=i+1;j<l;j++)
    {
      if(ch == s[j])
        s.erase(remove(s.begin()+j, s.end(), s[j]), s.end()); //remove duplicate characters
    }
  }
  int count=0;
  for(int i=0;i<s.length();i++)
  count++;
  if(count%2==0)
    cout<<"CHAT WITH HER!"<<endl;
  else
    cout<<"IGNORE HIM!"<<endl;

}
