/*
n = 5
    1
   21
  321
 4321
54321
*/

#include<iostream>
using namespace std;

int main(){
	int n,k;
	cout<<"enter any number : ";
	cin>>n;
	for(int i = 1; i <= n;i++)
	{
		for(int j = 1; j <= n ; j++)
		{
			if(i + j == n+1)
			{
				k = i;
				while(k != 0) {
					cout<<k;
					k--;
				}
				break;
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}