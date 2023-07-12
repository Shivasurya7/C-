/*
n = 5
*1
21*
*123
4321*
*12345
*/

#include <iostream>

using namespace std;

int main()
{
   int n,k;
   cin>>n;

   for(int i = 0; i < n; i++){
        if(i%2 == 0){
           k = 1;
           cout<<'*';
           while(k <= i+1){
                cout<<k;
                k++;
           }
        }
        else{
           k = i+1;
           while(k){
                cout<<k;
                k--;
           }
           cout<<'*';
        }
        cout<<endl;
   }
}
