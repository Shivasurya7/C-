/*
Problem Statement:

A number is said to be a kaprekar number if the square of the number is divided into two parts in such a way that the sum of divided parts equals the original number where none of the parts is having a value of 0.

We have given a number to find out whether the number is a kaprekar number or not.

Example
For Example:-

Input : number= 55 square of 55= 3025 divided into parts= 30 + 25 = 55 i.e equal to original number

Input : number= 99 square of 99 = 9801 divided into parts= 98 + 01 = 99 i.e equal to the original number

If the sum of the divided parts will not be equal the original number then the particular number is not said to be kaprekar number.

For Example:

Input : number = 16 square of the number = 256 divided into parts = 25 + 6 or 2 + 56 both of the parts will not be equal to the original number. Hence, it is not a kapreker number.

Input : n = 10 square of 10 = 100 after dividing into parts = 100 even if the sum of 10 + 0 is 10 it is not a Kaprekar number. This is because there is a condition for being a kaprekar number which says that none of the parts should be having a value of 0.
*/

//own approach

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,l,c=0;
    cin>>n;
    l = n*n;
    vector <int> d;
    while(l > 0){
        d.push_back(l%10);
        l /= 10;
    }
    reverse(d.begin(),d.end());
    int t = d.size()/2,s1 = 0,s2 = 0;
    for(int i = 0; i < d.size(); i++){
        if(i < t){
            s1 = s1 * 10 + d[i];
        }
        else{
            s2 = s2 * 10 + d[i];
        }
    }
    if(s1 + s2 == n){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}