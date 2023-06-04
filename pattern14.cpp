/*
n = 5
5  9  12 14 15 
4  8  11 13  
3  7  10   
2  6     
1
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   int n,k,l,size=0,t,f;
  cout<<"enter a number : ";
  cin>>n;
  t = (((n*n)-n)/2)+n;
  while(t != 0)
   {
       t = t/10;
       size++;
   }
  k = n;
  l = n-1;
  for(int i = 0; i < n; i++)
   {
     f = k;
     for(int j = 0; j < n; j++)
       {
         if(i+j <= n-1)
         {
           cout<<left<<setw(size)<<k<<" ";
           k = k+l;
           l--;
         }
         else
         {
           cout<<" ";   
         }
       }
     cout<<endl;
     k = f - 1;
     l = n-1;
   }
   
}



