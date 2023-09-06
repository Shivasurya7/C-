#include <bits/stdc++.h>
using namespace std;

string reverseString(string s){
    for(int i = 0; i< s.length()/2; i++){
        char t = s[i];
        s[i] = s[s.length()-i-1];
        s[s.length()-i-1] = t;
    }
    return s;
}

string reverseString(string s,int st){
    for(int i = st; i < (st+(s.length()-st)/2); i++){
        char t = s[i];
        s[i] = s[s.length()-i+(st-1)];
        s[s.length()-i+(st-1)] = t;
    }
    return s;
}

string nextPermutation(string nums) {
    int ind = -1;
    for(int i = nums.length()-2; i >= 0; i--){
        if(nums[i] < nums[i+1]){
            ind = i;
            break;
        }
    }
    if(ind == -1){
        return reverseString(nums);
    }
    for(int i = nums.size()-1; i > ind; i--){
        if(nums[i] > nums[ind]){
            char t = nums[i];
            nums[i] = nums[ind];
            nums[ind] = t;
            break;
        }
    }
    return reverseString(nums,ind + 1);
}

int main(){
    string s;
    cin>>s;
    cout<<nextPermutation(s);
}
