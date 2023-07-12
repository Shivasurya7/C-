/*

n = 3
1 6 5 
2 4  
3

n = 4
1 9 8 7 
2 10 6  
3 5   
4

n = 5
1 12 11 10 9 
2 13 15 8  
3 14 7   
4 6    
5

n = 6
1 15 14 13 12 11
2 16 21 20 10
3 17 19 9
4 18 8
5  7 
6
*/

#include <iostream>
#include <iomanip>
using namespace std;

int upperTriangleSpiral(int n,int i,int j){
  int r=0,c=0,t=n*(n+1)/2,k=1,lc=0,ur=0,dr=n-1;
  while(k < t){
    while(r != dr){
      if(r == i and c == j){
        return k;
      }
      k++;
      r++;
    }
    lc++;
    while(r != ur){
      if(r == i and c == j){
        return k;
      } 
      k++;
      c++;
      r--;
    }
    dr=dr-2;
    ur++;
    while(c != lc){
      if(r == i and c == j){
        return k;
      }
      k++;
      c--;
    }
    if(r == i and c == j){
      return k;
    }
  }
  return -1;
}

int main()
{
  int n;
  cout<<"enter a number : ";
  cin>>n;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(i+j <= n-1){
        cout<<upperTriangleSpiral(n,i,j)<<" ";
      }
      else{
        cout<<' ';
      }
    }
    cout<<endl;
  }
}