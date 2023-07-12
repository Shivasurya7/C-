/*
Sum of binary number 
Input: 
11010
10011
Output
101101
45

Input:
10001
00001
Output
10010
18

Input:
1000
110
Output:
1110
14
*/

#include <iostream>
using namespace std;

int pow(int num, int expo) {
		int n = 1;
		for(int i = 0; i < expo; i++) {
			n *= num;
		}
		return n;
	}

int binaryToDecimal(long n){
		int i = 0,f=0;
    while(n != 0){
        f += (n%10)*pow(2,i);
        i++;
        n = n/10;
    }
  return f;
}

long decimalToBinary(int n){
  int i,size=0;
        i = n;
        while(i != 0) {
        	i = i/2;
        	size++;
        }
        int bi[size];
        i = 0;
        while(n != 0){
            bi[i] = n%2;
            i++;
            n = n/2;
        }
  long f=0;
        for(int j = i-1;j >= 0;j--){
    		  f = (f*10)+bi[j];    
        } 
  return f;
}

int main()
{
  long n1,n2,b;
  int d;
  cout<<"enter the first binary number to add : ";
  cin>>n1;
  cout<<"enter the second binary number to add : ";
  cin>>n2;
  b = decimalToBinary(binaryToDecimal(n1)+binaryToDecimal(n2));
  d = binaryToDecimal(b);
  cout<<"the addition of the two given binary number is : "<<endl;
  cout<<"In binary form : "<<b<<endl;
  cout<<"In decimal form : "<<d;
}



