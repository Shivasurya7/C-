/*
Problem Statement:

Array after seggregation (odd values need to be places after even values)

you neet to find the logic behind how the values are placed.

INTPUT:
7
30 17 15 20 16 7 5
OUTPUT:
30 16 20 15 17 7 5

INPUT:
5
11 17 18 22 13
OUTPUT:
22 18 17 11 13

*/

//own approach 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i< n; i++){
        cin>>a[i];
    }
    int j = n-1;
    for(int  i = 0;i < n; i++){
        if(a[i] % 2 == 1){
            while(a[j]%2 == 1 and i < j){
                j--;
            }
            if(a[j]%2 == 0){
               swap(a[i],a[j]);
            }
        }
    }
    for(int i = 0; i< n; i++){
        cout<<a[i]<<" ";
    }
}