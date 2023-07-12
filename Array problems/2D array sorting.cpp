/*
Input:
n=3
1 6 4 
8 5 4
9 7 2
Output:
1 2 4
4 5 6
7 8 9
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
  for(int k = 0; k < n*n; k++){
    for(int i =0; i < n; i++){
      for(int j = 0; j < n; j++){
        if(j == n-1){
          if(arr[i][j] > arr[i+1][0]){
            int temp = arr[i][j];
            arr[i][j] = arr[i+1][0];
            arr[i+1][0] = temp;
          }
        }
        else{
          if(arr[i][j] > arr[i][j+1]){
            int temp = arr[i][j];
            arr[i][j] = arr[i][j+1];
            arr[i][j+1] = temp;
          }
        }
      }
    }
  }
  cout<<"output : "<<endl;
  for(int i =0; i < n; i++){
    for(int j = 0; j < n; j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  
}



