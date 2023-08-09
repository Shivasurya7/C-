/*
Problem Statement:

Given an amount, find the minimum number of notes of different denominations that sum up to the given amount. Starting from the highest denomination note, try to accommodate as many notes as possible for a given amount.
We may assume that we have infinite supply of notes of values {2000, 500, 200, 100, 50, 20, 10, 5, 1} 

Example
Input
800
Output
500 : 1
200 : 1
100 : 1
*/

//own approach 

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int p[9] = {2000, 500, 200, 100, 50, 20, 10, 5, 1} ;
    int n;
    cin>>n;
    int i = 0;
    while(n){
        int k = n/p[i];
        if(k > 0){
            cout<<p[i]<<" : "<<k<<endl;
            n -= k*p[i];
        }
        i++;
    }

}