/*
The program must accept two string values S1 and S2 as the input. If the length of S1 is not equal to the 
length of S2, then the program must append the asterisks to the smallest string so that the string values 
have the same length after padding the asterisks. Else the program must print the string values S1 and 
S2 as they are.

Boundary Condition(s):
1 <= Length of S1, S2 <= 100

Input Format:
The first line contains S1.
The second line contains S2.

Output Format:
The first two lines, each containing a string value as per the given conditions.

Example Input/Output 1:
Input:
robot
rainbow

Output:
robot**
rainbow

Example Input/Output 2:
Input:
Elephant
Cat

Output:
Elephant
Cat*****

Example Input/Output 3:
Input:
Maths
Brain

Output:
Maths
Brain

*/

// solution:

#include <bits/stdc++.h>
using namespace std;

string addStar(string s,int l){
    int n = l-s.length();
    for(int i = 0; i < n; i++){
        s += '*';
    }
    return s;
}

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int l1,l2;
    l1 = s1.length();
    l2 = s2.length();

    if(l1 == l2){
    }
    else if(l1 > l2){
        s2 = addStar(s2,l1);
    }
    else{
        s1 = addStar(s1,l2);
    }
    cout<<s1<<endl<<s2;
}