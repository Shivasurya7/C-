/*
robot game:
Input:
4 4
1 2
4
1 3 3 4
Output:
0 0 0 1
0 0 1 1
0 0 0 0
0 0 0 0
*/

#include <iostream>
using namespace std;

int main()
{
  int c,r,x,y,d;
  cin>>r>>c;
  int a[r][c];
  cin>>x>>y;
  if(x >= 0 and x < r and y >= 0 and y < c){
    cin>>d;
    int dir[d];
    for(int i = 0; i < d; i++){
      cin>>dir[i];
    }
    cout<<"Initial Battlegrount : "<<endl;
    for(int i = 0; i < r; i++){
      for(int j = 0; j < c; j++){
        if(i == x and j == y){
          a[x][y] = 1;
        }
        else{
          a[i][j] = 0;
        }
        cout<<a[i][j]<<' ';
      }
      cout<<endl;
    }
    for(int i = 0; i < d; i++){
      if(dir[i] == 1){
        y = (y+1 < c)?y+1:y;
      }
      else if(dir[i] == 2){
        y = (y-1 >= 0)?y-1:y;
      }
      else if(dir[i] == 3){
        x = (x-1 >= 0)?x-1:r;
      }
      else if(dir[i] == 4){
        x = (x+1 < r)?x+1:r;
      }
      a[x][y] = 1;
    }
    cout<<"After a battle completed : "<<endl;
    for(int i = 0; i < r; i++){
      for(int j = 0; j < c; j++){
        cout<<a[i][j]<<' ';
      }
      cout<<endl;
    }
  cout<<"Robot standing at ["<<x<<','<<y<<']';
  }
  else{
    cout<<"invalid robot position !!!!";
  }
}



