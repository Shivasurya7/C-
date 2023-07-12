/*
Input : 5

1  1  1  1 1
1 3 3 3 1
1 3 5 3 1
1 3 3 3 1
1  1  1  1 1

Test case 2 :

Input : 7
Output :
1 1 1 1 1 1 1
1 3 3 3 3 3 1
1 3 5 5 5 3 1
1 3 5 7 5 3 1
1 3 5 5 5 3 1
1 3 3 3 3 3 1
1 1 1 1 1 1 1

Test case 3: 
Input : 4
Output:
2 2 2 2
2 4 4 2
2 4 4 2
2 2 2 2


Test case 4:
Input : 6
Output:
2 2 2 2 2 2
2 4 4 4 4 2
2 4 6 6 4 2
2 4 6 6 4 2
2 4 4 4 4 2
2 2 2 2 2 2
*/

#include <iostream>
#include <iomanip>
using namespace std;

int find_dis(int i,int j,int n,int z)
{ 
  int count=0;
  int k=0,l=0;
  int t=n-1,s=0;
  while(true)
    {
      while(l != t)
        {
          l++;
          if(i == k and j == l)
          {
            return count;
          }
        }
      while(k != t)
        {
          k++;
          if(i == k and j == l)
          {
            return count;
          }
        }
      while(l != s)
        {
          l--;
          if(i == k and j == l)
          {
            return count;
          }
        }
      while(k != s)
        {
          k--;
          if(i == k and j == l)
          {
            return count;
          }
        }
      k++;
      l++;
      t--;
      s++;
      count++; 
      if(count == z-1)
      {
        return count;
      }
    }
}

int main()
{
  int n,s,t;
  cout<<"enter a number : "; 
  cin>>n;
  s = n/2;
  if(n%2!=0)
  {
    s++;
  }
  int a[s];
  t = n;
  for(int i=s-1; i >= 0; i--)
    {
      a[i] = t;
      t = t-2;
    }

  for(int i = 0; i < n; i++)
    {
      for(int j = 0; j < n; j++)
        {
          cout<<right <<setw(2)<<a[find_dis(i,j,n,s)]<<" ";
        }
      cout<<endl;
    }
}