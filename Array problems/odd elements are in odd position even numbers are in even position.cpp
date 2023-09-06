/*

Problem Statement:
From the given array change the array element like which
odd elements are in odd position even numbers are in even position in reverse order
(1 based indexing is followed)

Input:
5 4 3 2 6 7 1 8 9
Output:
5 8 3 6 7 4 1 2 9

Input:
1 7 4 66 35 23
Output:
1 66 7 4 35 23

*/

//Own approach

#include <iostream>

using namespace std;
int main(){
  int n=0,a[20],t;
  char c;
  while(scanf("%d%c",&t,&c)){
    a[n] = t;
    n++;
    if(c == '\n'){
      break;
    }
  }
  
  for(int i =0; i < n; i++){
    if(i%2 == 0){
      if(a[i]%2 == 1){
        continue;
      }
      else{
        for(int j = i+1; j < n; j++){
          if(a[j]%2 == 1){
            int t = a[i];
            a[i] = a[j];
            a[j] = t;
            break;
          }
        }
      }
    }
    else{
      int max=i;
      for(int j = i+1; j < n; j++){
        if(a[j] > a[max] and a[j]%2 == 0){
          max = j;
        }
      }
      int t = a[i];
      a[i] = a[max];
      a[max] = t;
    }
  }
  for(int i = 0; i < n; i++){
    cout<<a[i]<<" ";
  }
}
