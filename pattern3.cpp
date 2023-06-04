/*
Input : 1 2 3 4 5
Output : 
1 2 3 4 5
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8
5 6 7 8 9

Another test case for reference
Input is an single integer n
Input : 4 5 1 3
Output :
4 5 1 3
5 6 2 4
6 7 3 5
7 8 4 6
*/

#include<iostream>
using namespace std;

int main()
{
	int s,t,k;
	cout<<"enter the size of array: ";
	cin>>s;
	int a[s][s];
	cout<<"enter the elements of the array: \n";
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j <s; j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i = 0; i < 5; i++)
	{	
		for (int j = 0; j < 5; j++)
		{
		cout<<a[i][j]<<" ";
		a[i+1][j] = a[i][j]+1;
		}
		cout<<endl;
	}
}