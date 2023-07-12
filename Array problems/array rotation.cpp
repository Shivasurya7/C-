/*
PROBLEM:
Let take an array, 
arr[ ] ={10, 20, 30, 40, 50}

Input: 1
Output: 20, 30, 40, 50, 10

Input: 0
Output: 50, 10, 20, 30, 40
*/

#include<iostream>
using namespace std;
int main(){
  int s;
  string n;
  cout<<"enter the no. of elements in the array : ";
  cin>>s;
  int arr[s];
  cout<<"enter the elements of the array one by one :\n";
  for(int i = 0; i < s; i++){
      cin>>arr[i];
    }
  cout<<"the elements of the array before shifting : \n";
  for(int i = 0; i < s; i++){
      cout<<arr[i]<<" ";
    }
  cout<<"\nenter 0 for right shifting\n";
  cout<<"enter 1 for left shifting\n";
  cin>>n;
  for(int i = 0; i < n.length(); i++)
  {
    if(n[i] == '0'){
      int temp = arr[s-1];
      for(int i = s-1;i > 0; i--){
        arr[i] = arr[i-1];
      }
      arr[0] = temp;
    }
    else if(n[i] == '1'){
      int temp = arr[0];
      for(int i = 0; i < s-2; i++){
        arr[i] = arr[i+1];
      }
      arr[s-1] = temp;
    }
    else{
      cout<<"invalid option";  
    }
  }
  cout<<"the elements of the array after shifting : \n";
  for(int i = 0; i < s; i++){
      cout<<arr[i]<<" ";
    }
}