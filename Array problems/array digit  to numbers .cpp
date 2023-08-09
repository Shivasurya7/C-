/*
Problem Statement:
Given two array A[0….n-1] and B[0….m-1] of size n and m respectively, representing two numbers such that every element of arrays represent a digit. For example, A[] = { 1, 2, 3} and B[] = { 2, 1, 4 } represent 123 and 214 respectively. The task is to find the sum of both the number. In above case, answer is 337. 

Example
Input
n = 3, m = 3
a[] = { 1, 2, 3 }
b[] = { 2, 1, 4 }
Output 
337
Explanation
123 + 214 = 337

*/

//own approach 

#include <bits/stdc++.h>
using namespace std;

int formDigit(int a[],int n){
    int  ans = 0;
    for(int i = 0; i < n; i++){
        ans =  ans * 10 + a[i];
    }
    return ans;
}

int main()
{
    int n,m;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    cin>>m;
    int b[m];
    for(int i = 0; i < n; i++){
        cin>>b[i];
    }
    int n1,n2;
    n1 = formDigit(a,n);
    n2 = formDigit(b,m);
    cout<<n1+n2;
}