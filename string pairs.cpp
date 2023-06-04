/*
String Pair

Problem Description

One person hands over the list of digits to Mr. String, But Mr. String understands only strings. Within strings also he understands only vowels. Mr. String needs your help to find the total number of pairs which add up to a certain digit D.The rules to calculate digit D are as follow :-


Take all digits and convert them into their textual representation.

Next, sum up the number of vowels i.e. {a, e, i, o, u} from all textual representation.

This sum is digit D

Now, once digit D is known find out all unordered pairs of numbers in input whose sum is equal to D. Refer example section for better understanding.

Constraints

1 <= N <= 100

1 <= value of each element in second line of input <= 100

Number 100, if and when it appears in input should be converted to textual representation as hundred and not as one hundred. Hence number of vowels in number 100 should be 2 and not 4

Input

First line contains an integer N which represents number of elements to be processed as input

Second line contains N numbers separated by space

Output

Lower case representation of textual representation of number of pairs in input that sum up to digit D

Note: – (If the count exceeds 100 print “greater 100”)

Examples

Input : 5

1 2 3 4 5

Output : one

Input : 3

7 4 2

Output : zero
*/

#include <iostream>
#include <iomanip>
using namespace std;
string NumberToText(int n)
{
	 switch(n)
	 {
		 case 1:
			 return "one";
			 break;
		 case 2:
			 return "two";
			 break;
		 case 3:
			 return "three";
			 break;
		 case 4:
			 return "four";
			 break;
		 case 5:
			 return "five";
			 break;
		 case 6:
			 return "six";
			 break;
		 case 7:
			 return "seven";
			 break;
		 case 8:
			 return "eight";
			 break;
		 case 9:
			 return "nine";
			 break;
		 default:
			 return "";
			 break;
	 }
}
string multipleOfTen(int n)
{
	 switch(n)
	 {
		 case 2:
			 return "twenty";
			 break;
		 case 3:
			 return "thirty";
			 break;
		 case 4:
			 return "forty";
			 break;
		 case 5:
			 return "fifty";
			 break;
		 case 6:
			 return "sixty";
			 break;
		 case 7:
			 return "seventy";
			 break;
		 case 8:
			 return "eighty";
			 break;
		 case 9:
			 return "ninety";
			 break;
		 default:
			 return "";
			 break;
	 }
}
string textOfNumber(int n)
{
	 if(n > 10 and n <= 20)
	 {
		 switch(n)
		 {
			 case 11:
				 return "eleven";
				 break;
			 case 12:
				 return "twelve";
				 break;
			 case 13:
				 return "thirteen";
				 break;
			 case 15:
				 return "fifteen";
				 break;
			 case 20:
				 return "twenty";
				 break;
			 default:
				 string s = "teen";
				 s = NumberToText(n%10) + s;
				 return s;
		 }
	 }
	 else{
		 switch(n)
		 {
			 case 0:
				 return "zero";
				 break;
			 case 10:
				 return "ten";
				 break;
			 case 100:
				 return "hundred";
				 break;
			 default:
				 string s;
				 s = NumberToText(n%10);
				 n = n/10;
				 if(n != 0)
				 {
					 s = " " + s;
					 s = multipleOfTen(n%10) + s;
					 return s;
					 break;
				 }
				 return s;
				 break;
		 }
	 }
}
int findVowelsCount(int k)
{
	 string s = textOfNumber(k);
	 int n = s.length(),count = 0;
	 string v = "aeiou";
	 for(int i = 0; i < n; i++)
	 {
		 for(int j = 0; j < 5; j++)
		 {
			 if(s[i] == v[j])
			 {
				count++;
			 }
		 }
	 }
	 return count;
}
int main()
{
	 int n,D=0,count = 0;
	 cout<<"enter the no. of elements : ";
	 cin>>n;
	 int a[n];
	 for(int i = 0; i < n; i++)
	 {
		 cin>>a[i];
		 D += findVowelsCount(a[i]);
	 }
	 for(int i = 0; i < n; i++)
	 {
		 for(int j = i; j < n; j++)
		 {
			 if(a[i]+a[j] == D)
			 {
				count++;
			 }
		 }
	 }
	 cout<<"OUTPUT : "<<textOfNumber(count);


}



