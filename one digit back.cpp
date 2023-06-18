#include<iostream>
using namespace std;

int main()
{
     int n,r,f=0;
     cin>>n;
        while(n > 0){
            r = n%10;
            r--;
            if(r == 0){
                r = 9;
            }
            f = (f*10) + r;
            n /= 10;
         }
         while(f > 0){
            r = f%10;
            n = (n*10) + r;
            f /= 10;
         }
         cout<<n;
    return 0;
}
