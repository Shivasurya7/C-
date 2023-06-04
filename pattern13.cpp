/*
n = 5
 1     
 6  2    
10  7  3   
13 11  8  4  
15 14 12  9  5
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int n,k=1,l,size=0,t;
  cout<<"enter a number : ";
  cin>>n;
  l=n;
  int rk=n,rl=n,f;
  t = (((n*n)-n)/2)+n;
  while(t != 0)
   {
       t = t/10;
       size++;
   }
  for(int i = 0; i < n; i++)
   {
     f = k;
     for(int j = 0; j < n; j++)
       {
         if(i+j <= i+i)
         {
           cout<<right<<setw(size)<<k<<" ";
           k = k-l;
           l++;
         }
         else
         {
           cout<<" ";   
         }
       }
     cout<<endl;
     k = f + rk;
     rk--;
     rl--;
     l = rl;
     
   }
}



