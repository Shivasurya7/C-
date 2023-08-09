/*
Problem Statement:
Given two strings string1 and string2, remove those characters from first string(string1) which are present in second string(string2). Both the strings are different and contain only lowercase characters.
NOTE: Size of  first string is always greater than the size of  second string( |string1| > |string2|).

Example
Input:
string1 = "computer"
string2 = "cat"
Output: 
"ompuer"
Explanation: 
After removing characters(c, a, t)from string1 we get "ompuer".

*/

//own approach 

#include <bits/stdc++.h>
using namespace std;

int isFound(string s,char c){
    for(int i = 0; i < s.length(); i++){
        if(s[i] == c){
            return 0;
        }
    }
    return 1;
}

int main()
{
    string s1,s2,f="";
    cin>>s1>>s2;
    for(int i = 0; i < s1.length(); i++){
        if(isFound(s2,s1[i])){
            f += s1[i];
        }
    }
    cout<<f;
}