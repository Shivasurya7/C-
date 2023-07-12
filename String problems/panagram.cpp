#include <iostream>

using namespace std;

int main()
{
    string s;
    int a[26]={0},f=1;
    cout<<"enter a string : ";
    getline(cin,s);
    for(int i = 0; i < (int)s.length(); i++){
        a[s[i]-97] = 1;
    }
    for(int i = 0; i < 26; i++){
        if(a[i] != 1){
            cout<<"no";
            f=0;
            break;
        }
    }
    if(f){
        cout<<"yes";
    }
}
