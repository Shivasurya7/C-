/*
Problem statement:

Capitalized the common character in the given string1 to string2

Example:
Input:
apple -> string1
pen -> string2
Output : 
aPPlE

*/

//own approach 

#include <bits/stdc++.h>
using namespace std;

char isFound(string s,char c){
    for(int i = 0; i < s.length(); i++){
        if(s[i] == c){
            return (c-32);
        }
    }
    return c;
}

int main()
{
    string s1,s2;
    cin>>s1>>s2;

    for(int i = 0; i < (int)s1.length(); i++){
        s1[i] = isFound(s2,s1[i]);
    }
    cout<<s1;
}