/*
Problem Statement:
Given a set of strings, find the longest common prefix.
Example
Input
apple ape april
Output
ap
*/

//own approach

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2,s3,lp,fs2 = "",fs3 = "",temp = "";
    cin>>s1>>s2>>s3;

    for(int i = 0; i < s1.length(); i++){
        temp += s1[i];
        fs2 += s2[i];
        fs3 += s3[i];
        if(temp != fs2 or temp != fs3){
            if(lp.length() == 0){
                cout<<"no prefix fount";
            }
            cout<<lp;
            return 0;
        }
        lp = temp;
    }
    cout<<lp;
}

