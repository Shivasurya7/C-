/*
Input
Welcome
Output
Welcome
e     m
l     o
c     c
o     l
m     e
emoclew
*/

#include <iostream>
using namespace std;

int main()
{
  string s;
  cout<<"enter the string : ";
  cin>>s;
  int r=0,c=0;
  for(int i = 0; i < s.length(); i ++){
    for(int j = 0; j < s.length(); j++){
      if(i == 0){
        cout<<s[r]<<" ";
        r++;
      }
      else if(i == s.length()-1){
        cout<<s[s.length()-r-1]<<" ";
        r++;
      }
      else if(j == 0){
        cout<<s[c]<<" ";
      }
      else if(j == s.length()-1){
        cout<<s[s.length()-c-1]<<" ";
      }
      else{
        cout<<"  ";
      }
    }
    cout<<endl;
    c++;
    r=0;
  }
}

