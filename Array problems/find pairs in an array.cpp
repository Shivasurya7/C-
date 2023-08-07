/*
The program must accept N integers and print the adjacent integers whose difference is less than or 
equal to X or more than Y. If there are no such adjacent integers, the program must print -1.

Boundary Condition(s):
2 <= N <= 100
-10000 <= Each integer value <= 10000
1 <= X, Y <= 10000

Input Format:
The first line contains N.
The second line contains N integer values separated by a space.
The third line contains X and Y separated by a space.

Output Format:
The first line contains -1 or the lines, each contains the adjacent integers whose difference is less than or 
equal to X or more than Y.

Example Input/Output 1:
Input :
6
-5 10 55 1000 1100 1300
20 200

Output:
-5:10
55:1000

Explanation:
Here X=20 and Y=200.
The absolute difference between -5 and 10 is 15, which is less than 20. So -5:10 is printed.
The absolute difference between 10 and 55 is 45, which is not less than or equal to 20 and not greater 
than 200.
The absolute difference between 55 and 1000 is 945, which is greater than 200. So 55:1000 is printed.
The absolute difference between 1000 and 1100 is 100, which is not less than or equal to 20 and not 
greater than 200.
The absolute difference between 1100 and 1300 is 200, which is not less than or equal to 20 and not 
greater than 200.
Hence the output is
-5:10
55:1000

Example Input/Output 2:
Input :
6
-5 10 55 1000 1100 1300
50 100

Output:
-5:10
10:55
55:1000
1100:1300

Example Input/Output 3:
Input :
3
100 200 300
20 150

Output:
-1

*/

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,t,l,h,f=1;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    cin>>l>>h;
    for(int i = 0; i < n-1; i++){
        t = abs(a[i] - a[i+1]);
        if(t <= l or t > h){
            cout<<a[i]<<':'<<a[i+1]<<endl;
			f = 0;
        }
    }
	if(f){
		cout<<-1;
	}
}