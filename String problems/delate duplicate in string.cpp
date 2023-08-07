/*
The program must accept a string S as the input. The program must remove the duplicate characters in 
the string S and then the program must print the modified string as the output.

Boundary Condition(s):
1 <= Length of S <= 100

Input Format:
The first line contains the string S.

Output Format:
The first line contains a list of character(s).

Example Input/Output 1:
Input:
blackjaacks
Output:
bljs

Explanation:
In the string blackjaacks, the characters a, c, k occurred more than one time. So remove the characters 
from the string blackjaacks. Now the string becomes bljs.
Hence the output is bljs

Example Input/Output 2:
Input:
rainbow

Output:
rainbow
*/

// solution:

#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin>>s;
    int n = s.length(),f;
    for(int i = 0; i < n; i++){
        f = 1;
        if(s[i] == '\0'){
            continue;
        }
        for(int j = i+1; j < n; j++){
            if(s[i] == s[j]){
                s[j] = '\0';
                f = 0;
            }
        }
        if(f){
            cout<<s[i];
        }
    }
}