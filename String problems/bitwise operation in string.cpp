/*
Problem statement:

A -> and
B -> or
c -> xor

1A0 -> 0 (because 1 and 0 gives-> 0)
1A1 -> 1 (because 1 and 1 gives-> 1)
1A0B1 -> 1 (1 and 1 -> 0 or 1 -> 1)

Example 1:
Input:
1A1B0C0
Output : 
1

Example 2:
Input:
1A1B0C1
Output : 
0

*/

//own approach 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int out = 0,f=1,g=0;

    for(int i = 0; i < s.length(); i++){
        if(f){
            out = s[i]-48;
            f = 0;
        }
        else if(s[i] == 'A'){
            g = 1;
        }
        else if(s[i] == 'B'){
            g = 2;
        }
        else if(s[i] == 'C'){
            g = 3;
        }
        else if(g == 1){
            out = out & (s[i]-48);
        }
        else if(g == 2){
            out = out || (s[i]-48);
        }
        else if(g == 3){
            out = out ^ (s[i]-48);
        }
    }
    cout<<out;
}