#include <bits/stdc++.h>
#define MAXN 500
using namespace std;

int grid[5][5];
int di[] = {-1, 1, 0, 0};
int dj[] = {0, 0, -1, 1};
int visited[5][5];

int fora (int i, int j){
  return i<0 || i >=5 || j<0 || j>=5;
}

void dfs(int i, int j){
  for (int k=0;k<4;k++){
    int ii = i+di[k];
    int jj = j+dj[k];
    if (fora (ii, jj) || grid[ii][jj] || visited[ii][jj])
      continue;

    visited[ii][jj] = 1;
    dfs(ii, jj);
  }

}

int main(){

  int t; cin >> t;
  while(t--){
    for (int i=0;i<5;i++){
      for(int j=0;j<5;j++){
        cin >> grid[i][j];
      }
    }

    memset(visited, 0, sizeof(visited));
    visited[0][0] = 1;
    dfs(0, 0);
    if (visited[4][4]) cout << "COPS" << endl;
    else cout << "ROBBERS" << endl;

  }

  return 0;
}
