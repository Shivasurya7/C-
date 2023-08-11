/*
jack is a sports teacher at St. Patrick's School. He makes games not only to make the student fit, but also smart. So, he lined up all the N number of students in his class. At each position he has fixed a board with the integer number printed on it. Each of the numbers are unique and are in exactly the range of N. Let us say there are 10 students, then the boards will be printed with numbers from 1 to 10 in a random order given by the sequence A[].
As a rule, all students wear a jersey with their numbers printed on it. So, if there are N students, each will have a number, just like a football team.
Now, in the beginning, all the students will stand as per the increasing order of their jersey numbers, from left to right.

The only difference will be their respective board number which is placed at their respective location. The board location is fixed and cannot be changed. We can consider the arrangement as below. Suppose there are 5 students, and the board is placed in the order of [23154]
Board-> 2, 3, 1, 5,4
Student's Jersey-> 1,2,3,4,5
Now the game begins.
•After every beat of the drum, each student will have to move to that location (index), where his board is pointing to. In the above case student with jersey #1 is standing with board #2, so now he will have to move to location # 2. Similarly, all the other students will do.
So after first beat of the drum, the alignment will be:
Board 2, 3, 1, 5, 4
Student's Jersey -3. 1, 2, 5.4 
Jersey #1 has moved to Index2. 
Jersey #2 has moved to Index 3.
Jersey #3 has moved to index 1. 
Jersey #4 has moved to index 5.
Jersey #5 has moved to Index 4.

Now again with the next beat of the drum, same task as shown below:
Board -> 2, 3, 1, 5, 4
Student's Jersey-> 2,3,1,4,5
Jersey #3 has moved to index 2.
Jersey #1 has moved to index 3.
Jersey #2 has moved to index 1.
Jersey #5 has moved to index 5.
Jersey #4 has moved to index 4.
This keeps going on and on, until all the students are back the way they were at the beginning. So after 6 beats of the drum, all the students will be aligned the same way as before. Given N and the order of board of the respective positions, find the number of beats required to bring back the students to their original position.
So,for the above case the answer is 6.

Input:
5
2 3 1 5 4
1 2 3 4 5
Output:
6

Input:
4
3 4 2 1
1 2 4 3
Output:
4

Input:
4
4 2 3 1
1 2 3 4
Output:
2

*/

//own approach

#include<bits/stdc++.h>
using namespace std;

int isSame(int j[],int t[],int n){
    for(int i = 0; i < n; i++){
        if(j[i] != t[i]){
            return 1;
        }
    }
    return 0;
}

void arrayCopy(int a[],int b[],int n){
    for(int i = 0; i< n; i++){
        b[i] = a[i];
    }
}

int main(){
    int n,c=0,f = 1;
    cin>>n;
    int b[n],j[n],t[n],t1[n];

    for(int i = 0; i < n; i++){
        cin>>b[i];

    }
    for(int i = 0; i < n; i++){
        cin>>j[i];
        t1[i] = j[i];
    }

    while(isSame(j,t,n)){
        for(int i = 0;i < n; i++){
           for(int j = 0; j < n; j++){
              if(b[i] == j+1){
                t[j] = t1[i];
              }
           }
        }
        arrayCopy(t,t1,n);
        c++;
    }
    cout<<c;
}
