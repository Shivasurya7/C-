/*
Problem Statement: Sum of alphabet index of each character in a given string
Input: MANGO
Output: 50
Constraints:
String limit 1 to 1000
Explanation:
Alphabet index value of given string are: M – 13,A – 1, N – 14, G – 7, O – 15
13+1+14+7+15 = 50
*/

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
  string alphaUpper = " ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  string alphaLower = " abcdefghijklmnopqrstuvwxyz";
  int sum=0;
  string input;
  cout<<"enter the string : ";
  cin>>input;
  for(int i = 0; i < input.length(); i ++)
    {
      if('A' <= input[i] && input[i] <= 'Z')
      {
        for(int j = 1; j < alphaUpper.length(); j++)
          {
            if(alphaUpper[j] == input[i])
            {
              sum += j;
            }
          }
      }
      else
      {
        for(int j = 1; j < alphaUpper.length(); j++)
          {
            if(alphaLower[j] == input[i])
            {
              sum += j;
            }
          }
      }
    }
  cout<<"the sum of Alphabet index value of given string is : "<<sum;
}