/*
Input:
N=3
1 2 3
4 5 6
7 8 9
Output
5 4 7 8 9 6 3 2 1
*/

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout<<"enter the size of the square matrix : ";
  cin>>n;
  int a[n][n];
  cout<<"enter the matrix : "<<endl;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cin>>a[i][j];
    }
  }
  cout<<"the given matrix : "<<endl;;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
  int i,j;
  int r,lc=n/2,k=n*n;
  int ur = n/2,c;
  if(n%2 == 0){
    i = (n/2);
    j = (n/2)-1;
    c = (n/2)+1;
    r = (n/2)+1;
  }
  else{
    i = j = n/2;
    c = (n/2)+2;
    r = (n/2)+2;
  }
  cout<<"output : ";
while(1)
  {
    while(j != lc-1){
      cout<<a[i][j]<<" ";
      k--;
      j--;
    }
    if(k == 0){
      break;
    }
    lc--;
    while(i != r-1){
      cout<<a[i][j]<<" ";
      k--;
      i++;
    }
    r++;
    while(j != c-1){
      cout<<a[i][j]<<" ";
      k--;
      j++;
    }
    c++;
    while(i != ur-1){
      cout<<a[i][j]<<" ";
      k--;
      i--;
    }
    ur--;
  }
}



