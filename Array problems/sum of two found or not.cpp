/*
Problem statement:

Given an array Arr of N positive integers and another number X. Determine whether or not there exist two elements in Arr whose sum is exactly X.

Example:
Input:
6
1 4 45 6 10 8
16
Output:
Yes
Explanation
Arr[3] + Arr[4] = 6 + 10 = 16
*/

//own approach (uning two pointers method)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n,k;
    vector <int> arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cin>>k;
    sort(arr.begin(),arr.end());
    int i = 0,j = n-1;
    while(i < j){
        int sum = arr[i]+arr[j];
        if(sum == k){
            cout<<"YES";
            return 0;
        }
        else if(sum < k){
            i++;
        }
        else{
            j--;
        }
    }
    cout<<"NO";
}

