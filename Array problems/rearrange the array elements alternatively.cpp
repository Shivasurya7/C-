/*
Problem Statement:
Given a sorted array of positive integers. Your task is to rearrange the array elements alternatively i.e first element should be max value, second should be min value, third should be second max, fourth should be second min and so on.
Note: Modify the original array itself. Do it without using any extra space. You do not have to return anything.
Question+ Input + Output (Programming)

Example:
Input:
6
123456
Output:
615243
Explanation
Max element = 6, min = 1, second max = 5, second min = 2, and so on... Modified array is: 6 1 5 2 4 3.
*/

//own approach

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
    for(int i = 0; i < n; i++){
        int t = i;
        if(i%2 == 0){
            for(int j = i+1; j < n; j++){
                if(arr[t] < arr[j]){
                    t = j;
                }
            }
        }
        else{
            for(int j = i+1; j < n; j++){
                if(arr[t] > arr[j]){
                    t = j;
                }
            }
        }
        int temp = arr[i];
        arr[i] = arr[t];
        arr[t] = temp;
    }
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

