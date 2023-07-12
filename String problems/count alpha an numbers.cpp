#include<iostream>
using namespace std;

int main()
{
    string s,t="";
    int c = 0;
    cin>>s;


    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'a' and s[i] <= 'z'){
            c++;
            if(t.length()){
                c++;
                t="";
            }
        }
        else{
           t += s[i];
        }  
        if(i == s.length()-1){
           if(t.length()){
                c++;
            }
        }
    }
    cout<<c;

}
