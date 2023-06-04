/*
Program to check whether the given matrix is an upper triangular or lower triangular.

 Input:

 9 2 4 1

 0 6 2 8

 0 0 7 5

 0 0 0 9

 Output Is Upper Triangular Matrix 

 Input:

 0 1

 1 1

 Output is Lower Triangular Matrix
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
  for(int i =0; i < n; i++){
    for(int j = 0; j < n; j++){
      cin>>arr[i][j];
    }
  }
  int rlt,llt,rut,lut;
  rlt = llt = rut = lut = 0;
  for(int i =0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(j < i){
        rut += arr[i][j];
      }
      if(j > i){
        rlt +=  arr[i][j];
      }
      if(j+i < n-1){
        llt += arr[i][j];
      }
      if(j+i > n-1){
        lut += arr[i][j];
      }
    }
  }
  if(llt == 0 or rlt == 0){
    cout<<"lower triangular matrix";
  }
  else if(rut == 0 or lut == 0){
    cout<<"upper triangular matrix";
  }
}



