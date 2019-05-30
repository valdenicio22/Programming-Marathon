#include <bits/stdc++.h>
#define MAXN 1010
using namespace std;

int n, m;
int dl[] = {0, -1, 0, 1};
int dc[] = {-1, 0, 1, 0};
int grid[MAXN][MAXN];
int way[MAXN][MAXN];

int fora(int x, int y){
  if ( x < 0 || x >= n || y < 0 || y >= m) return 1;
  return 0;
}

void dfs(int i, int j){
  for(int k=0;k<4;k++){
    int ii = i + dl[k];
    int jj = j + dc[k];
    if (fora(ii, jj) || !grid[ii][jj] || way[ii][jj])
      continue;

    way[ii][jj] = way[i][j] + 1;
    dfs(ii, jj);
  }
}

int main(){

  int ini_i, ini_j, fim_i, fim_j;
  cin >> n >> m;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin >> grid[i][j];
      if (grid[i][j] == 2)
        ini_i = i, ini_j = j;
      else if (grid[i][j] == 3)
        fim_i = i, fim_j = j;
    }
  }
  way[ini_i][ini_j] = 1;
  dfs(ini_i, ini_j);
  cout << way[fim_i][fim_j] << endl;

return 0;
}
