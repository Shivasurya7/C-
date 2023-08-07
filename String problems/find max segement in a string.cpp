/*
Given a string S containing digits having length L and an integer N, the program must split the string S 
into N segments and print the maximum possible segment value.

Constraints:
1 < N < L
0 < L < 10

Example Input/Output 1:
Input:
9743
3
Output:
97

Example Input/Output 2:
Input:
1002
2
Output:
100

*/

// solution:

#include <bits/stdc++.h>
using namespace std;

int stringToInt(string s){
    int n = 0;
    for(int i = 0; i < s.length(); i++){
        n = n*10 + (s[i]-48);
    }
    return n;
}

int maxSegment(string s,int k,int ma=0,int se = 1,int ind=0){
    static int maxi = 0;
    string t;
    if(se == k){
      for(int i = ind; i < s.length(); i++){
        t += s[i];
      }
      int num = stringToInt(t);
      maxi = (maxi > num)? maxi: num;
      return maxi;
    }
    for(int i = ind; i < s.length()-(k-se); i++){
        t += s[i];
        int num = stringToInt(t);
        maxi = (maxi > num)? maxi: num;
        maxSegment(s,k,maxi,se+1,i+1);
    }
    return maxi;
}

int main()
{
    string s;
    int k;
    cin>>s;
    cin>>k;
    cout<<maxSegment(s,k);
}