/*
Input:
4
1 2 3 4
6 5 7 4
2 7 8 9
3 4 2 5
Output:
1 6 3 7
2 5 4 4
2 3 8 2
7 4 9 5

Explanation: Transpose of sub Matrix 
1 2
6 5
It transpose to 
1 6
2 5
 Like,
3 4
7 4
Transposed to
3 7
4 4..
Similarly
All sub Matrix is transpose and print the Matrix
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
for(int k = 0,p = n/2; k < n; k += n/2,p += n/2){
  for(int m = 0,l = n/2; l <= n; l += n/2,m += n/2){
    int s = 1,r=0;
    for(int i = k; i < p; i++){
      int c=r+1;
      for(int j = m+s; j < l; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[i+(c-r)][j-(c-r)];
            arr[i+(c-r)][j-(c-r)] = temp;
        c++;
      }
      r++;
      s++;
    }
  }
}
  cout<<"output : "<<endl;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}



