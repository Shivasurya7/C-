/*
The output should be a sorted string based on the input key given by the user as mentioned in the above criteria. (Check the output in Example 1, Example 2)
•Additional messages in output will cause the failure of test cases.

Constraints:
O<length (input String)<=50
Input key should contain all the alphabets of inputstrings
No duplicates in input keys.

Example 1:
Input:
apple->Input string
eapl -> Input string, sorting key value
Output:
eappl->output string with sorted value based on the user keys.
Explanation:
The input by the user is "apple" and the key is "eapl". So, as per the key, all "e" has to be sorted first. Then all the a's and the all the p's, and finally all the 1's Note that here we have 2 p's so they will be sorted together in the output. Putting everything together the final string comes as "eappl"

Example 2:
Input:
welcome ->input string
lowmec -> input string,sorting key value
Output:
lowmeec ->output string with sorted value based on the user keys. Explanation:
The input by the user is "welcome" and the key is "lowmec". So, as per the key, all 1's has to be sorted first,then all the O's and then all the w's and then all the m's, the all the e's, and finally all the c's .Note that here we have 2 p's so they will be sorted together in the output. Putting everything together the final string comes as "lowmeec"
*/

//own approach

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2,t="";
    cin>>s1>>s2;

    for(int i = 0; i < s2.length(); i++){
        for(int j = 0; j < s1.length(); j++){
            if(s2[i] == s1[j]){
                t += s1[j];
            }
        }
    }
    cout<<t;
}