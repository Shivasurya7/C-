/*
Print palindrome numbers from array..
Input:
123  343  4456  24542
Output:
343   24542
*/

#include<iostream>  
using namespace std; 
int main()  
{
  int t,rev,n;
  cout<<"enter the elements : "; 
  while(cin>>n){
    rev = 0;
    t = n;
    while(t != 0) {
			rev = (rev*10)+t%10;
			t = t/10;
		}
		if(rev == n) {
			cout<<n<<" ";
		}
  }
}
