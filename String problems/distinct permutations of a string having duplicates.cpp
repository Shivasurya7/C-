/*
Problem statement:

Print all distinct permutations of a string having duplicates.

Example:
Input:
ABCA
Output : 
AABC AACB ABAC ABCA ACBA ACAB BAAC BACA BCAA CABA CAAB CBAA
*/

//own approach (using recurtion)


#include <bits/stdc++.h>
using namespace std;

set <string> stringPermutation(string s,string t = "",int ind = 0){
  static set <string> ans;
  if(t.length() == s.length()){
    ans.insert(t);
    return ans;
  }
  if(t.length() == 0){
    string temp = "";
    temp += s[ind];
    stringPermutation(s,temp,ind+1);
  }
  else{
    for(int i = 0; i < t.length()+1; i++){
      string temp = "";
      for(int j = 0; j < t.length(); j++){
        if(i == j){
          temp += s[ind];
        }
        temp += t[j];
      }
      if(i == t.length()){
        temp += s[ind];
      }
      stringPermutation(s,temp,ind+1);
    }
  }
  return ans;
}

int main(){
  string s;
  cin>>s;
  set <string> r;
  r = stringPermutation(s);
  for(auto i : r){
    cout<<i<<endl;
  }
}