/*
Problem Statement:

check if the  transaction is sucessfull or not?

a sopekeeper rums a shop. every prooduct in the shop cost Rs30. 
the customer can give only three value of money that is 30 or 60 or 120.
we need to give them correct change to them. if we did't have the correct change the transcation is failed.


INTPUT:
5 -> no of transactions
30 60 30 120 30 -> value of transactions
OUTPUT:
TRANSCATION SUCESSFULL
EXPLANATION:
at start 30->0 60->0 120->0
costomer gives 30 we don't want to give any change
so we have 30->1 60->0 120->0
next user give  60 we need to give him balance 30 we already have one 30 so give him change
so we have 30->0 60->1 120->0
next user give 30 we don't want to give any change
so we have 30->1 60->1 120->0
next user give  60 we need to give him balance 90 we already have one 30 and one 60 so give him change
at last we have 30->0 60->0 120->0
we able to give him correct change for all transcation so the transcation is sucessfull

INPUT:
3
30 60 120
OUTPUT:
TRANSCATION FAILED

*/

//own approach 

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int a[n];
    int p[3] = {0,0,0};
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    for(int i = 0; i < n; i++){
        if(a[i] > 30){
            int r = a[i]-30;
            if(p[0] >= r/30){
                p[0] -= r/30;
            }
            else if(p[0] >= 1 and p[1] >= 1 and r == 90){
                p[0] -= 1;
                p[1] -= 1;
            }
            else{
                cout<<"transaction failed!!!";
                return 0;
            }
        }
        p[(a[i]/30)-1]++;
    }
    cout<<"transcation sucessfull";
}