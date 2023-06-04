/*
n = 5
 1     
 1  1    
 1  2  1   
 1  3  3  1  
 1  4  6  4  1
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int n;
  cout<<"enter a number : ";
  cin>>n;
  int a[n], s[n];
  for (int i = 0; i < n; i++) {
    a[i] = 1;
    s[i] = 1;
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (j <= i) {
        if (j == 0 or j == i) {
          cout <<right<<setw(2)<<1<<" ";
        } else {
          s[j] = a[j] + a[j - 1];
          cout<<right<<setw(2)<<s[j]<<" ";
        }
      } else {
        cout << " ";
      }
    }
    cout << endl;
    for (int k = 0; k <= i; k++) {
      a[k] = s[k];
    }
  }
  return 0;
}



