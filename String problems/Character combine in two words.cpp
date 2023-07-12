/*
Problem Statement: Character combine in two words
Input:
abcd
efghijklm
Output:
aebfcgdhIJKLM
Explanation:
Print each one pair of character and other characters are in capital letters
*/

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
  string s1,s2,ms;
  int min,max;
  cout<<"enter the first string : ";
  cin>>s1;
  cout<<"enter the second string : ";
  cin>>s2;
  if(s1.length() <= s2.length())
  {
    min = s1.length();
    max = s2.length();
    ms = s2;
  }
  else
  {
    ms = s1;
    max = s1.length();
    min = s2.length();
  }
  cout<<"output : ";
  for(int  i = 0; i < min; i++)
    {
        cout<<s1[i]<<s2[i]; 
    }
  for(int i = min; i < max; i++)
    {
        cout<<char(ms[i]-32);
    }
}