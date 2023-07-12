/*
Test case 1: 

Input: one two three
Output: three two one

Test case 2: 

Input: I love india
Output: india love I
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
string s,k,f;
    cout<<"enter the string : ";
    getline(cin,s);
    for(int i = 0; i < s.length() ;i++){
        if(s[i] != ' '){
            k += s[i];
          if(i == s.length()-1){
            f = k + f;
          }
        }
        else{
           f = k + f;
           f = s[i] + f;
           k = "";
        }
    }  
  cout<<f;
  }

