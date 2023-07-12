/*
Transpose of Matrix using single dimensional array
Input:
n=3
1 2 3 
4 5 6
7 8 9

Output:
1 4 7
2 5 8
3 6 9

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int n;
  cout<<"enter the size of the square matrix : ";
  cin>>n;
  int a[n*n];
  cout<<"enter the element of the square matrix : "<<endl;
  for(int i = 0; i < n*n; i++){
      cin>>a[i];
  }
  cout<<"the give matrix is : ";
  for(int i = 0; i < n*n; i++){
    if(i%n == 0){
      cout<<endl;
    }
      cout<<a[i]<<" ";
    
  }
  cout<<"\nthe transpose give matrix is : "<<endl;
  for(int i = 0; i < n; i++){
    for(int j = i; j < n*n; j += n){
      cout<<a[j]<<" ";
    }
    cout<<endl;
  }
}



