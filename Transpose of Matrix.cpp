/*
Transpose of Matrix...
Input
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
using namespace std;
int main() {
    int n;
cout<<"enter the size of the square matrix : ";
cin>>n;
int a[n][n];
cout<<"enter the elements of the square matrix : "<<endl;
for(int i = 0; i < n; i++){
  for(int j = 0;j < n; j++){
    cin>>a[i][j];
  }
}

cout<<"the given matrix is  : "<<endl;
for(int i = 0; i < n; i++){
  for(int j = 0;j < n; j++){
    cout<<a[i][j]<<" ";
  }
  cout<<endl;
}

cout<<"the transpose of the given matrix is : "<<endl;
for(int i = 0; i < n; i++){
  for(int j = 0;j < n; j++){
    cout<<a[j][i]<<" ";
   }
   cout<<endl;
}
}


