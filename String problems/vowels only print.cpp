/*
Input:
n=2
String= hello, welcome to my world
Output:
eoe
Explanation
hello, welcome to my world
Here, even position text are:
el,wloet ywrd
Here, vowels only print
eoe
*/

#include<iostream>  
using namespace std; 

int main()  
{
  string s;
  cout<<"enter the string : ";
  getline(cin,s);
  for(int i = 1; i < s.length(); i += 2){
    if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
      cout<<s[i];
    }
  }
}
