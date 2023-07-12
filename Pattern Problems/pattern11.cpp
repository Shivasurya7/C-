/*
Input: 4
Output:
1 2 3 4
    8 7 6 5
       9 10 11 12
           16 15 14 13
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int n;
  cout<<"enter a number : ";
  cin>>n;
int k = 1,s = (n*2)-1;
  for(int i = 1; i <= n; i++){
    for(int t = 1; t <= i-1; t++){
          cout<<"  ";
      }
    for(int j = 0; j < n; j++){
      if(i%2 == 0){
        cout<<k-j<<" ";
      }
      else{
       cout<<k+j<<" "; 
      }
    }
    if(i%2 == 0){
        k++;
      }
    else{
      k += (n*2)-1;
    }
    cout<<endl;
  }
}

