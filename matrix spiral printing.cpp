/*
Input:  {{1,    2,   3,   4},
              {5,    6,   7,   8},
             {9,   10,  11,  12},
            {13,  14,  15,  16 }}
Output: 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10 



Input: { {1,   2,   3,   4,  5,   6},
           {7,   8,   9,  10,  11,  12},
          {13,  14,  15, 16,  17,  18}}



Output: 1 2 3 4 5 6 12 18 17 16 15 14 13 7 8 9 10 11
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int r,c,k=0,i,j;
  cout<<"enter the no. row : ";
  cin>>r;
  cout<<"enter the no. of coloumn : ";
  cin>>c;
  int a[r][c];
  cout<<"enter "<<r*c<<" elements one by one\n"; 
  for(i = 0; i < r; i ++)
    {
      for(j = 0; j < c; j++)
        {
          cin>>a[i][j];
        }
    }
  cout<<"the entered matrix is : \n";
  for(i = 0; i < r; i ++)
    {
      for(j = 0; j < c; j++)
        {
          cout<<a[i][j]<<" ";
        }
      cout<<endl;
    }

  i=0;
  j=0;
int ur=-1,lc=-1;
cout<<"the sequence is : \n";
int tr = r,tc = c;
while(k != tr*tc)
  {
    while(j != c)
      {
        k++;
        cout<<a[i][j]<<" ";
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
        cout<<a[i][j]<<" ";
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
      cout<<a[i][j]<<" ";
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
        cout<<a[i][j]<<" ";
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
}



