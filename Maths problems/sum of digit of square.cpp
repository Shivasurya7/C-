#include<iostream>
using namespace std;

int main()
{
     int n,sum,r;
     cin>>n;
     int a[n];
     for(int i = 0; i < n; i++){
        cin>>a[i];
        cout<<a[i]<<" ";
     }
     cout<<endl;
     for(int i = 1 ; i < n; i++){
        for(int j = 0; j < n; j++){
            sum = 0;
            while(a[j] > 0){
                r = a[j]%10;
                sum += r;
                a[j] /= 10;
             }
             a[j] = sum*sum;
             cout<<a[j]<<" ";
        }
        cout<<endl;
     }
    return 0;
}
