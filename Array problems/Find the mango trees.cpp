/*
In a garden the tree are planted in rows and columns. the mango trees are planted in first row, first column and last column.
write a program to find the given tree number is a mango tree oor not.

Input:
5 -> row
5 -> column
11
Output:
yes

Input:
3
4
11
Output:
no

*/

//own approach

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,r,c;
    cin>>r>>c>>n;
    n--;

    for(int i = 0; i < r*c; i++){
        cout<<i/c<<i%c<<" ";
    }
    if(n/c == 0 or n%c == 0 or n%c == c-1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
