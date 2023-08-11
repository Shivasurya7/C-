/*
Given a string in which the same character occurs in many consecutive character elements. Your task is to find the characters that have even frequency and are consecutive. Display the sum of every frequency count(For even frequency only) Example 1:

Sample Input: 
aaabbaccccdd
Sample Output:
8

Example 2
Sample Input: vdkkmmmnn
Sample Output:
4

*/

//own approach

#include<bits/stdc++.h>
using namespace std;

int countChar(string s,char c,int j){
    int k = 0;
    for(int i = j; i < s.length(); i++){
        if(c != s[i]){
            break;
        }
        k++;
    }
    return k;
}

int main(){
    string s;
    cin>>s;
    int sum = 0;
    for(int i = 0; i < s.length(); i++){
        int c;
        c = countChar(s,s[i],i);
        if(c % 2 == 0){
            sum += c;
        }
        i +=  c-1;
    }
    cout<<sum;
}
