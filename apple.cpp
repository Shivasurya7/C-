#include<iostream>
using namespace std;

int main()
{
     int n,ea,eo,sa=0,so=0;
     cin>>n;
     char f[n];
     int no[n];
     for(int i = 0; i < n; i++){
        char tc;
        int tn;
        cin>>tc>>tn;
        f[i] = tc;
        no[i] = tn;
        if(tc == 'a'){
            sa += tn;
        }
        else{
            so += tn;
        }
     }
     cin>>ea>>eo;
     sa += ea;
     so += eo;
       // cout<<sa<<" "<<so;
     for(int i = 0; i < n; i++){
        if(f[i] == 'a'){
            sa -= no[i];
        }
        else{
            so -= no[i];
        }
        if(sa == so){
            cout<<sa<<" "<<so<<endl;
        }
     }
    return 0;
}
