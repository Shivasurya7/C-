/*
n = 5
     1
    123
   12345
  1234567
 123456789
  1234567
   12345
    123
     1
*/

#include <iostream>
using namespace std;

int main()
{
  int n,i,k,s=2;
  cout<<"enter the number of rows : ";
  cin>>n;
  k=n;
  int t = 1,t2 = (n*2)-3;
  
  for(i = 0; i < n*2; i++)
    {
      if(i < n)
      {
        for(int j = 0; j < n*2; j++)
        {
          if( j == k)
            {
              for(int j = 0; j < t; j++)
                {
                  cout<<"*";
                }
              k--;
              t += 2;
              break;
            }
          else{
            cout<<" ";
          }
        }
      }
      else
      {
        for(int j = 0; j < n*2; j++)
        {
          if( j == s)
            {
              
              for(int j = 0; j < t2; j++)
                {
                  cout<<"*";
                }
              s++;
              t2 -= 2;
              break;
            }
          else{
            cout<<" ";
          }
        }
      }
      
      cout<<endl; 
    } 
}	