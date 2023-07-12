/*
TestCase 1: 
Input: 13,2 4,15,12,10,5
Output: 13,2,12,10,5,15,4

TestCase 2: 
Input: 1,2,3,4,5,6,7,8,9
Output: 9,2,7,4,5,6,3,8,1
*/

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
  string s;
  cout<<"enter the elements : ";
  cin>>s;
  int a[50]={0},n=0,k=0;
  for(int i = 0; i < s.length();i++){
        if(s[i] == ','){
            a[k] = n;
            k++;
            n = 0;
        }
        else{
           n = n * 10 + (s[i] - 48);
          if(i == s.length()-1){
            a[k] = n;
          }
        }
    }  
  for(int i = 0; i <= k; i++){
    for(int j = i+2; j <= k; j = j+2){
      if(i % 2 == 0){
        if(a[i] < a[j]){
          int temp = a[i];
          a[i] = a[j];
          a[j] = temp;
        }
      }
      else{
        if(a[i] > a[j]){
          int temp = a[i];
          a[i] = a[j];
          a[j] = temp;
        }
      }
    }
  }
  cout<<endl;
 for(int i = 0; i <= k; i++){
   if(i != 0){
     cout<<',';
   }
    cout<<a[i];
  }
}



