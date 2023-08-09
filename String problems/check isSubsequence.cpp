/*
Problem statement:
Given two strings s and t, return 1 if s is a subsequence of t, or 0 otherwise.
A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "abe" is a subsequence of "abcde" while "aed" is not).

Input Format
Two strings t and s in order.
Constraints
NA

Output Format
A single integer(1 or 0)

Sample Input:
abcde
abe
Sample Output:
1

Sample Input:
faceprep
aprf
Sample Output:
0
*/

//own approach 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int j = 0;
    for(int i = 0; i < s1.length(); i++){
        if(s1[i] == s2[j]){
            j++;
        }
    }
    if(j == s2.length()){
        cout<<1;
    }
    else{
        cout<<0;
    }

}