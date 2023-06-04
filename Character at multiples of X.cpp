/*
Problem Statement: Character at multiples of X
Input:
abcdefghijklmn
4
Output:
dhl
Explanation: each 4 th position of characters in a given string
*/

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
  string s;
  int n;
  cout<<"enter the string : ";
  cin>>s;
  s = ' '+s;
  cout<<"enter the position : ";
  cin>>n;
  for(int i = n; i < s.length(); i += n)
    {
      cout<<s[i];
    }
}