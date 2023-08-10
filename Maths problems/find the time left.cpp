/*
Problem Statement:
The person is travelling from place A to place B. He will take 12 hours to reach the destination by roads. As the person starts his journey, he has to note the current time in hours H and minutes M (non negative integer input). The task is to find the time left for him to reach the destination (output). If current time (hours or minutes) is a value exceeding 24 hours, the output should be a negative integer value, representing total exceeded hours and minutes (See the Example 3).

Input format:
The candidate has to write the code to accept two inputs separated by a new line. First Input Accept value for hours which is H.
Second Input- Accept value for minutes which is M.

Output format:
The output should be time in 24 hour format (Check the output in Example 1 and 2 above). The hours and minutes should be separated by ":" without any additional space(See the output in examples).
Additional messages in output will cause the failure of test cases.

Constraints:
0<H<=100
0<M<=60

Example 1:
Input:
14
20 
Output:
9::40 -> Time left to reach the destination

Example 2:
Input:
1
15 
Output:
22:45 -> Time left to reach the destination

Example 3:
Input:
30 
5
Output:
-6::5 ->Time left to reach the destination
*/

//own approach

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h,m;
    cin>>h>>m;
    if(h < 24){
       h = 24 - h;
       if(60 - m > 0){
         h--;
       }
       cout<<h<<"::"<<60 - m;
    }
    else{
        cout<<24 - h<<"::"<<m;
    }
}

