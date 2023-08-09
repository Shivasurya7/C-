/*
Problem Statement:

Given a String S, reverse the string without reversing its individual words. Words are separated by dots.

Example
Input
S = i.like.this.program.very.much
Output 
much.very.program.this.like.i
Explanation 
After reversing the whole
string(not individual words), the input
string becomes
much.very.program.this.like.i

*/

//own approach 

#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s,ans="",f="";
    cin>>s;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == '.' or i == s.length()-1){
            if(i == s.length()-1){
                f += s[i];
            }
            ans = f + ans;
            if(i != s.length()-1){
                ans = '.' + ans;
            }
        f = "";
        }
        else{
            f += s[i];
        }
    }
    cout<<ans;
}