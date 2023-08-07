/*
The program must accept an array of N integers as the input. The program must print 1 if the array 
contains an integer 0 or the consecutive integers whose sum is equal to 0. Else the program must 
print 0 as the output.

Boundary Condition(s):
1 <= N <= 1000
-10^5 <= Each integer value <= 10^5

Input Format:
The first line contains N.
The second line contains N integers separated by a space.

Output Format:
The first line contains an integer value 1 or 0 as per the given condition.

Example Input/Output 1:
Input:
5
5 -2 3 -1 7

Output:
1

Explanation:
Here N=5 and the given 5 integers are 5, -2, 3, -1 and 7.
The sum of three integers -2, 3 and -1 is 0.
So 1 is printed as the output.

Example Input/Output 2:
Input:
6
-3 2 3 -1 6 4
Output:
0
*/

//solution:

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,mx=0,t,sum;
    cin>>n;
    int a[n];
    for(int i =0; i < n; i++){
        cin>>a[i];
    }

    for(int i = 0; i < n; i++){
        if(a[i] == 0){
            cout<<1;
            return 0;
        }
           sum = 0;
        for(int j = i; j < n; j++){
            sum += a[j];
            if(sum == 0){
                cout<<1;
                return 0;
            }
        }
    }
    cout<<0;

}



