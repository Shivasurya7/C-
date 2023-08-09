/*
Problem statement:
In the city of Toyland, there are N houses. Noddy is looking for a piece of land in the city to build his house. All the houses in the city lie in a straight line and all of them are given a house number and position of the house from the entry point of the city. Noddy wants to find the house numbers between which he can build the largest house. Write an algorithm to help Noddy to find the house numbers between which he can build his house.

Hint: No two houses will have the same position in case of multiple such answers, print the one with the least distance from the reference point.

Input Format
The first line of the input consists of an integer num, representing the number of houses (N). The next N lines consist of two space-separated integers – house Num and pos, representing the house number and the position of the houses.

Output Format
Print two space-separated integers representing the house numbers in ascending order between which the largest plot is available.
Constraints
2 < num < 10^6
1 < house Num < num
0 < pos < 10^6

INPUT:
5
3 7
1 9 
2 0
5 15
4 30
OUTPUT:
4 5
*/

//own approach 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,h1,h2;
    cin>>n;
    int num[n],pos[n];
    for(int i = 0; i < n; i++){
        cin>>num[i]>>pos[i];
    }
    int mi;
    for(int  i = 0; i < n; i++){
            mi = i;
        for(int j = i+1; j < n; j++){
            if(pos[mi] > pos[j]){
                mi = j;
            }
        }
        int temp = pos[i];
        pos[i] = pos[mi];
        pos[mi] = temp;
        temp = num[i];
        num[i] = num[mi];
        num[mi] = temp;
    }
    int ma = 0;
    for(int i = 0; i < n-1; i++){
        if(pos[i+1] - pos[i] > ma){
            ma = pos[i+1] - pos[i];
            h1 = num[i];
            h2 = num[i+1];
        }
    }
    cout<<"answer : ";
    if(h1 > h2){
        cout<<h2<<" "<<h1;
    }
    else{
        cout<<h1<<" "<<h2;
    }
}