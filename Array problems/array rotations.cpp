/*
array rotation 
input:
3
1 2 3 4 5
3
output:
3 4 5 2 1
 
*/
#include <bits/stdc++.h>

using namespace std;
int main()
{
   int n,t;
   cin>>n;
   int a[n];
   for(int i = 0; i < n; i++){
    cin>>a[i];
   }

   cin>>t;
   t = t%n;

   for(int i = 0; i < t; i++){
    int temp = a[n-1];
    for(int j = n-1; j > 0; j--){
        a[j] = a[j-1];
    }
    a[0] = temp;
   }

   for(int i = 0; i < n; i++){
    cout<<a[i]<<" ";
   }
}

/*
backward rotation:

#include <bits/stdc++.h>

using namespace std;
int main()
{
   int n,t;
   cin>>n; // no. of elements in the array
   int a[n];
   for(int i = 0; i < n; i++){
    cin>>a[i]; // geting elements of the array
   }

   cin>>t; //no of rotations
   t = t%n;

   for(int i = 0; i < t; i++){
    int temp = a[0];
    for(int j = 0; j < n-1; j++){
        a[j] = a[j+1];
    }
    a[n-1] = temp;
   }

   for(int i = 0; i < n; i++){
    cout<<a[i]<<" "; // displaying the array elements
   }
}
*/
