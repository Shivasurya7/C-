/*
Test case 1:
Input: a1b10
Output: abbbbbbbbbb

Test case 2: 
Input: b3c6d15
Output: bbbccccccddddddddddddddd

The number varies from 1 to 99.
*/

#include <iostream>
using namespace std;

int main()
{
  string s;
  cout<<"enter the string : ";
  cin>>s; 
  int n = 0;
  string k;
  for(int i = 0; i < s.length()+1; i++)
    { 
      if('0' <= s[i] and s[i] <= '9')
      {
        n = n * 10 + (s[i] -48);
      }
      else{
        if(n > 0)
        {
          for(int j= 0; j < n; j++)
            {
              cout<<k;
            }
          n = 0;
          k = "";
        }
        k += s[i];
      }
    }
}

