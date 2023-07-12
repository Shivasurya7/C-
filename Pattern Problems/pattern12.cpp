/*
n = 5
1 0 1 0 1 
0 1 0 1 0 
1 0 1 0 1 
0 1 0 1 0 
1 0 1 0 1
*/

#include <iostream>
using namespace std;
int main(){
  int n,k=1;
  cout<<"enter any number : ";
  cin>>n;
  for(int i = 0; i < n;i++)
    {
      for(int j = 0; j < n ; j++)
        {
          if(k == 1)
          {
              cout<<k<<" ";
              k--;
          }
          else{
              cout<<k<<" ";
              k++;
          }
        }
      cout<<endl;
    }
}



