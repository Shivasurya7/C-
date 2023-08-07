/*
Arun is given an array of non negative integers containing N values. The program must print the length L 
of the longest subarray containing only cubic numbers.

Note: Cubic number is a perfect cube number.

Boundary Condition(s):
2 <= N <= 10^5
1 <= Each integer value <= 10000

Input Format:
The first line contains N.
The second line contains N integers separated by a space.

Output Format:
The first line contains L.
Example Input/Output 1:

Input:
10
8 1 10 125 1 64 8 36 100 1000

Output:
4

Explanation:
The longest subarray containing only cubic numbers is 125 1 64 8 whose length is 4

*/

//solution:

#include <bits/stdc++.h>
using namespace std;

int cube(int n){
 return n*n*n;
}

int isCube(int n){
    if(n == 1){
        return 1;
    }
    for(int i = 1; i < n/2; i++){
        if(n == cube(i)){
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n,mx=0,t;
    cin>>n;
    int a[n];
    for(int i =0; i < n; i++){
        cin>>a[i];
    }
    for(int i = 0; i < n-1; i++){
        if(isCube(a[i])){
            t = 1;
            for(int j = i+1; j < n; j++){
                if(isCube(a[j])){
                    t++;
                }
                else{
                    break;
                }
            }
            mx = max(mx,t);
        }
    }
    cout<<mx<<endl;
}



