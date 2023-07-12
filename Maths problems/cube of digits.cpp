#include <iostream>

using namespace std;

int main()
{
   int n,r,i=0;
   cin>>n;
   int a[10];
    while(n > 0){
        r = n % 10;
        a[i] = r*r*r;
        i++;
        n /= 10;
    }
    for(int j = i-1; 0 <= j; j--){
        cout<<a[j];
    }
}
