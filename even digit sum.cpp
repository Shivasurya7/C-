#include <iostream>

using namespace std;

int main()
{
    int d=0,n,r,f=1,es=0,os=0;
    cout<<"enter the number : ";
    cin>>n;

    while(n > 0){
       r = n%10;
       d++;
       if(f){
        es += r;
        f = 0;
       }
       else{
        os += r;
        f = 1;
       }
       n /= 10;
    }
    if(d%2 == 0){
        cout<<"even sum : "<<es<<endl;
        cout<<"odd sum : "<<os;
    }
    else{
        cout<<"not accepted";
    }
}
