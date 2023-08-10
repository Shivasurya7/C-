/*
Problem Statement:
Look-and-Say Pattern:
To generate a member of the sequence from the previous member, read off the digits of the previous member, counting the number of digits in groups of the same digit. For example:
1 is read off as "one 1" or 11.
11 is read off as "two 1s" or 21.
21 is read off as "one 2, then one 1" or 1211.
1211 is read off as "one 1, one 2, then two 1s" or 111221. 111221 is read off as "three 1s, two 2s, then one 1" or 312211.

Example Input
n = 5
Output
111221
Explanation
The 5th row of the given pattern will be 111221.
*/

//own approach

#include <bits/stdc++.h>
using namespace std;

int coutNum(string s,char c,int j){
    int co = 0;
    for(int i = j; i < s.size(); i++){
        if(s[i] != c){
            break;
        }
        co++;
    }
    return co;
}

int main()
{
    int n;
    cin>>n;
    string s = "1",t = "";
    for(int i = 0; i < n-1; i++){
        for(int k = 0; k < s.length(); k++){
            char c = coutNum(s,s[k],k)+48;
            t += c;
            t += s[k];
            k += (c-48)-1;
        }
        s = t;
        t = "";
    }
    cout<<s;
}

