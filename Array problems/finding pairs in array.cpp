/*
Input:
 
nums = [8, 7, 2, 5, 3, 1]
target = 10
 
Output:
 
Pair found (8, 2)
or
Pair found (7, 3)
 
 
Input:
 
nums = [5, 2, 6, 8, 1, 9]
target = 12
 
Output: Pair not found
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int n,target;
  cout<<"enter the no. of elements in the array : ";
  cin>>n;
  int a[n];
  cout<<"enter the element of the array : "<<endl; 
  for(int i = 0; i < n; i++){
      cin>>a[i];
  }
  cout<<"enter the target : ";
  cin>>target;
  bool f = true;
  int o = 0;
   for(int i = 0; i < n; i++){
       for(int j = i+1; j < n-1; j++){
         if(a[i] + a[j] == target){
           if(o%2 == 1){
             cout<<"or"<<endl;
           }
           cout<<"pair fount("<<a[i]<<","<<a[j]<<")"<<endl;
           o++;
           f = false;
         }
      }
    }
  if(f){
    cout<<"Pair not found";
  }
}



