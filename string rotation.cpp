/*
Input: 
MCA
1
OUTPUT : AMC

MCA
2
Output : CAM
STRING ROTATION CONCEPT
*/

#include<iostream>
using namespace std;
int main(){
  int s,n;
  string w;
  cout<<"enter the string : ";
  cin>>w;
  s = w.length();
  cout<<"the string before rotation : "<<w;
  cout<<"\nenter 1 for right rotation\n";
  cout<<"enter 2 for left rotation\n";
  cout<<"ener your option : ";
  cin>>n;
  int size=0,k=n;
  while(k!=0)
  {
      k = k/10;
      size++;
  }
  int a[size];
  for(int i = 0; i<size; i++)
  {
      k = n%10;
      n = n/10;
      a[i] = k;
  }
  for(int i = size-1; i>=0; i--)
  {
  if(a[i] == 1){
      
    char temp = w[s-1];
    w[s-1] = '\0';
    w = temp+w;
    
  }
  else if(a[i] == 2){
    char temp = w[0];
    w.erase(0,1);
    w += temp;
  }
  else{
    cout<<"invalid option\n";  
  }
  }
  cout<<"the string after shifting : "<<w;
}