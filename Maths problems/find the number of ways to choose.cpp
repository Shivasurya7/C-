/*
Problem Statement:
A boy enters a stationery shop. There are N number of pencils and M number of erasers available in the shop. But the boy's mother insists that he can buy only P number of pencils and E number of erasers. The task here is to find the number of ways the boy can choose 'P' pencils and 'E' erasers from the available N and M pencils & erasers respectively.
Note:
The boy can choose in any order.
N-number of pencils available in the shop M-number of erasers available in the shop
P-number of pencils he can choose to buy from N E-number of erasers he can choose to buy from M

Example 1:
Input:
3 Value of NM 1 Value of MW
2 Value of P X
1 Value of EY
Output:
3 -> Number of ways we can choose
Explanation:
From the input given above
1st way of selecting:
Select 1st and 2nd pencils, 1 eraser
2nd way of selecting:
Question+ Input + Output (Programming)
Select 2nd and 3rd pencils, 1 eraser
1st way of selecting:
Select 1st and 3rd pencils, 1 eraser
The Possible number of ways selecting 2 pencils and 1 eraser is 3
Hence the output is 3.
*/

//own approach

#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    int f = 1;
    for(int i =2; i <= n; i++){
        f *= i;
    }
    return f;
}

int main()
{
    int n,m,p,e,pc,ec;
    cin>>n>>m>>p>>e;
    pc = fact(n)/(fact((n-p)) * fact(p));
    ec = fact(m)/(fact((m-e)) * fact(e));
    cout<<pc*ec;
}

