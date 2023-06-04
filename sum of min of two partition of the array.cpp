/*
Input: nums = [1,4,3,2]
Output: 3
Explanation: take 2 partition of array then take minimum value of each partition then sum the value...1. (1, 4), (2, 3) -> min(1, 4) + min(2, 3) = 1 + 2 = 3...

Another tast case for this prb
Input : 5 8 4 1 9 3 7 8
Output : 4
And array order will be 
1 4 5 8 3 7 8 9
*/

#include <iostream>
using namespace std;

int main()
{
   int s,t,k;
   cout<<"enter the size of array: ";
   cin>>s;
   int a[s];;
   cout<<"enter the elements of the array : \n";
   for(int i=0;i<s;i++)
   {
       cin>>a[i];

   }
   cout<<"elements in the array are :\n";
   for(int i=0;i<s;i++)
   {
       cout<<a[i]<<" ";
   }
   cout<<endl;
   t=s/2;
   for(int i=0;i<t;i++)
   {
       for(int j=i+1;j<t;j++)
       {
         if(a[i]>a[j])
         {
          k = a[i];
          a[i] = a[j];
          a[j] = k;
         }
       }
   }
   for(int i=t;i<s;i++)
   {
    for(int j=i+1;j<s;j++)
       {
         if(a[i]>a[j])
         {
          k = a[i];
          a[i] = a[j];
          a[j] = k;
         }
   }
   }
   cout<<"sorted array : \n";
   for(int i=0;i<s;i++)
   {
       cout<<a[i]<<" ";
   }
   
   cout<<"\nsum of the minimum number of two partition of the array is "<<a[0]+a[t];
}