/*
Input:

n = 4
5 3 2 1
9 8 7 6
6 5 4 3
8 9 6 5

Output: 

1 2 3 5
6 7 8 9
3 4 5 6
5 6 8 9
 
*/

#include <bits/stdc++.h>

using namespace std;
int main()
{
   int n,t;
   cin>>n;
   int m[n][n];
   for(int i =0; i < n; i++){
     for(int j = 0; j < n; j++){
        cin>>m[i][j];
     }
   }

   for(int i = 0; i < n; i++){
     for(int j = 0; j < n; j++){
            int s = j;
        for(int k = j+1; k < n; k++){
            if(m[i][s] > m[i][k]){
                s = k;
            }
        }
        t = m[i][j];
        m[i][j] = m[i][s];
        m[i][s] = t;
     }
   }

   for(int i =0; i < n; i++){
     for(int j = 0; j < n; j++){
        cout<<m[i][j]<<" ";
     }
     cout<<endl;
   }
}
