#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    int f=0,c=0;

    for(int i = 0; i < n; i++){
        c=1;
        for(int j = i+1; j < n; j++){
            if(a[i] == a[j]){
                f++;
                a[j] = NULL;
            }
        }
        if(f > 1 and a[i] != NULL){
            c++;
        }
    }
    cout<<"repeated numbers count is : "<<c;
    return 0;
}
