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

/*Solution 2:(using recursion)

#include<iostream>  
using namespace std; 
void fib(int n,int option,int n1 = 0,int n2 = 1){
  int n3 = n1+n2;
  if(n == option){ //to stop at the right number
     if(n1%2 != option%2){ // to print even for option 1 and odd for option 2
        cout<<n1<<" ";
      }
    return; 
  }
  fib(n-1,option,n2,n3);//swaping the value to find next fib number
  if(n1%2 != option%2){
      cout<<n1<<" ";
   }
}
int main()  
{
  int n,option;
  cout<<"enter the nuber :";
  cin>>n;
  cout<<"enter the option : ";
  cin>>option;
  fib(n+2,option); // adding to for to print the requered values has to come in n1 to print starting values 
} 
*/
