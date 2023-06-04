/*
n = 8
1                              1
1 2                          2 1
1 2 3                      3 2 1
1 2 3 4                  4 3 2 1
1 2 3 4 5              5 4 3 2 1
1 2 3 4 5 6          6 5 4 3 2 1
1 2 3 4 5 6 7      7 6 5 4 3 2 1
1 2 3 4 5 6 7 8  8 7 6 5 4 3 2 1
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int n,s;
  cout<<"enter the number of rows : ";
  cin>>n;
  s = (n*2)-1;
  
  for(int i = 1; i <= n; i++)
    {
      int l = 0;
      for(int j = 1; j <= i; j++)
        {
          cout<<left<<setw(2)<<j;
          l++;
        }
      while(l < s)
        {
          cout<<"  ";
          l++;
        }
      for(int j = i; j >= 1 ; j--)
        {
          cout<<right<<setw(2)<<j;
        }
      s--;
      cout<<endl;
    }
      

}	