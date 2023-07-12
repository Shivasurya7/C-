/*
Input :  
4
geeksforgeeks
gemkstones
acknowledges
aguelikes

Output : 4
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int n;
  cin>>n;
  string s[n];
  for(int i= 0; i < n; i++){
    cin>>s[i];
  }
  int a[26]={0},t[26]={0};
  for(int i = 0; i < n; i++){
    for(int j = 0; j < s[i].length(); j++){ 
      t[s[i][j] - 97] = 1;
    }
    for(int j = 0; j < 26; j++){ 
      a[j] += t[j];
      t[j] = 0;
    }
  }
  int count = 0;
  for(int i = 0; i < 26; i++){
    if(a[i] == n){
      count++;
    }
  }
  cout<<count;
}
