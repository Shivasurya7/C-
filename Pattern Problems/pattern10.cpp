/*
Pattern printing like snake
Input = 5
Output
1 10 11 20 21
2  9 12 19 22
3  8 13 18 23
4  7 14 17 24
5  6 15 16 25
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int n;
  cout<<"enter a number : ";
  cin>>n;
  int f = (n*2)-1 ,s = 1;
  for(int i = 1; i <= n; i++){
    int k = i;
    for(int j = 0; j < n; j++){
      cout<<right<<setw(2)<<k<<" ";
      if(j%2 == 0){
        k += f;
      }
      else{
        k += s;
      }
    }
    s += 2;
    f -= 2;
    cout<<endl;
  }
}

