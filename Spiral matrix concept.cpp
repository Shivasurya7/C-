/*
Input: 5
Output:
1   2  3  4 5
16 17 18 19 6
15 24 25 20 7
14 23 22 21 8
13 12 11 10 9
Explanation:
Spiral matrix concept..
*/

#include <iostream>
#include <iomanip>
using namespace std;

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int r,c,k=0,i,j,n,l=0;
  cout<<"enter a number : ";
  cin>>n;
  r = c = n;
  int a[r][c];
  i = j = 0;
int ur=-1,lc=-1;
int tr = r,tc = c;
while(k != tr*tc)
  {
    while(j != c)
      {
        k++;
        a[i][j] = k;
        j++;  
      }
    if(k == tr*tc)
    {
      break;
    }
    j--;
    i++;
    ur++;
    while(i != r)
      {
        k++;
        a[i][j] = k;
        i++;  
      }
    if(k == tr*tc)
    {
      break;
    }
    i--;
    j--;
    c--;
   while(j != lc)
    {
      k++;
      a[i][j] = k;
      j--;  
    }
    if(k == tr*tc)
    {
      break;
    }
    j++;
    i--;
    r--;
    while(i != ur)
      {
        k++;
        a[i][j] = k;
        i--;
      }
    if(k == tr*tc)
    {
      break;
    }
    i++;
    j++;
    lc++;  
  }
  for(i = 0; i < n; i ++)
    {
      for(j = 0; j < n; j++)
        {
          cout<<right<<setw(2)<<a[i][j]<<" ";
        }
     cout<<endl;
    }
}

