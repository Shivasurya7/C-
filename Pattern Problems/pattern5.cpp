/*
Input : computer

Output:
c
co
com
comp
compu
comput
compute
computer
compute
comput
compu
comp
com
co
c
*/

#include <iostream>
using namespace std;

int main()
{
  string s;
  int i;
  cout<<"enter a string : ";
  cin>>s;
  for(i = 0; i < s.length(); i++)
    {
      for(int j = 0; j <= i; j++)
        {
          cout<<s[j];
        }
      cout<<endl;
    }
  for(i = s.length()-2; i >= 0; i--)
    {
      for(int j = 0; j <= i; j++)
        {
          cout<<s[j];
        }
      cout<<endl;
    }
  
}	