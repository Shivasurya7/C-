/*
Test case 1
Input:
n=10
Option=1
Output:
34  8  2  0

Test case 2
Input: 12
Option: 2
Output:
89  55  21  13  5  3  1  1
*/

#include<iostream>  
using namespace std; 
int main()  
{
  int n,option;
  cout<<"enter the n : ";
  cin>>n;
  cout<<"enter the option : ";
  cin>>option;
  int fib[n];
  fib[0] = 0;
  fib[1] = 1;
  for(int i = 2; i < n; i++){
    fib[i] = fib[i-1] + fib[i-2];
  }
  for(int i = n-1; i >= 0; i--){
    if(fib[i]%2 != option%2){
      cout<<fib[i]<<" ";
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
