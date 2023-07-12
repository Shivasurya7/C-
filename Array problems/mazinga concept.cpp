/*
mazinga concept
Input:
4
1   5  3 20
22 23 54 56
12 17 63 80
89 43 44 70
Output:
80
*/

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout<<"enter the size of the square matrix : ";
  cin>>n;
  int arr[n][n];
  cout<<"enter the matrix : "<<endl;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cin>>arr[i][j];
    }
  }
int i,j,mi,mj;
  i = j = mj = mi = 0;
  while(1){
    if(arr[mi][mj] < arr[i-1][j] and i-1 >= 0){
      mi = i-1;
      mj = j;
    }
    if(arr[mi][mj] < arr[i+1][j] and i+1 < n){
      mi = i+1;
      mj = j;
    }
    if(arr[mi][mj] < arr[i][j-1] and j-1 >= 0){
      mi = i;
      mj = j-1;
    }
    if(arr[mi][mj] < arr[i][j+1] and j+1 < n){
      mi = i;
      mj = j+1;
    }
    if(i == mi and j == mj){
      break;
    }
    else{
      i = mi;
      j = mj;
    }
  }
  cout<<"output : "<<arr[i][j];
}



