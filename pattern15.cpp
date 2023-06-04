/*
n = 5
E   A
 D B 
  C  
 C B 
D   A
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   int n,f,s;
   string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  cout<<"enter a odd number between 1 to 26 : ";
  cin>>n;
  f = n-1;
  s = 0;
  for(int i = 0; i < n; i++)
   {
     for(int j = 0; j < n; j++)
       {
         if(i==j)
         {
           cout<<right<<setw(1)<<a[f];
           f--;
         }
         else if(i+j == n-1){
             cout<<right<<setw(1)<<a[s];
             s++;
         }
         else
         {
           cout<<" ";   
         }
       }
     cout<<endl;
   }
   
}



