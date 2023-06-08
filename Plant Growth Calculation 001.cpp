/*
Plant Growth Calculation 001
Problem Statement:
In a matrix containing R rows and C columns, various plants are planted. The growth of a given plant in a calendar month
depends on is current height at the beginning of the month. If the current height is a prime number, the height by which
the plant grows in that month is equal to the current height minus previous prime number (1 there is no previous prime
number consider the previous prime number as zero). If the current height is not prime number then the height by
which the plant grows in that month is equal to the sum of the unit digits of the adjacent plants height at the beginning of
the month (if there is no adjacent plant to left or right consider the value as zero). Given the current height of the plants at
the beginning of first month, print the height of the plants ater N months.

Input Format:
The first line contains R and C separated by a space.

Next R fines contains C values representing the height of the plants (with the values separated by a space)
Last line contains N.

Output Format:
R lines containing C values denoting the height of the plants after N months (with the values separated by a space).

Boundary Conditions:
1<=R C<=999

1<=N <= 100

1 <= Initial height of the plants <= 100

Example Input/Output 1:
input:

3 3
1 2 4
6 1 11
5 7 12
2

Output:

4 13 10
9 20 23
9 25 21

Explanation
After the 1st month, the height of the plants will be
3 4 6
7 8 15
7 9 19
After 2nd month, the height of the plants will be
4 13 10
9 20 23
9 25 21

Note: Max Execution Time Limit: 5000 millisecs
*/

#include <iostream>
using namespace std;

int isPrime(int n){
  if(n == 0 or n == 1){
    return 0;
  }
  for(int i = 2; i < n; i ++){
    if(n%i == 0){
      return 0;
    }
  }
  return 1;
}

int prevPrime(int n){
  n--;
  while(n){
    if(isPrime(n)){
      return n;
    }
    n--;
  }
  return 0;
}

int main()
{
  int r,c,t;
  cin>>r>>c;
  int s[r][c],co[r][c];
  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      cin>>s[i][j];
      co[i][j] = s[i][j];
    }
  }
  cin>>t;
  
  for(int k = 0; k < t; k++){
    for(int i = 0; i < r; i++){
      for(int j = 0; j < c; j++){
        if(isPrime(co[i][j])){
          co[i][j] += co[i][j] - prevPrime(co[i][j]);
        }
        else{
          if(j == c-1){
            co[i][j] += s[i][j-1]%10;
          }
          else if(j-1  == -1){
            co[i][j] += s[i][j+1]%10;
          }
          else{
            co[i][j] += s[i][j-1]%10 + s[i][j+1]%10;
          }
        }
       
      }
    }
    for(int i = 0; i < r; i++){
      for(int j = 0; j < c; j++){
          s[i][j] = co[i][j];
        }
      }
  }
  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      cout<<co[i][j]<<" ";
    }
    cout<<endl;
  }
}

