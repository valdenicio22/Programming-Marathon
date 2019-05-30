#include <bits/stdc++.h>
#define MAXN 550
using namespace std;

char grid[MAXN][MAXN];
int visited[MAXN][MAXN];

int empty=0, cont=0;
int di[] = {-1, 1, 0, 0};
int dj[] = {0, 0, 1, -1};
int n, m, k;

bool fora (int i, int j){
  return i < 0 or i >= n or j < 0 or j >= m;
}

void dfs(int i, int j){
    if(empty - cont == k) return;
    visited[i][j] = 1;
    ++cont;
    for(int w = 0; w < 4; w++){
        int ii = i + di[w];
        int jj = j + dj[w];
        if(fora(ii, jj) or grid[ii][jj] != '.' or visited[ii][jj])
          continue;
        dfs(ii, jj);
    }

}

int main(){


  int ini_i, ini_j;
  cin >> n >> m >> k;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin >> grid[i][j];
      if (grid[i][j] == '.'){
        empty++;
        ini_i = i;
        ini_j = j;
      }
    }
  }
  dfs(ini_i, ini_j);

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if (grid[i][j] == '.' && !visited[i][j])
        grid[i][j] = 'X';
    }
    cout << grid[i] << endl;
  }

  return 0;
}
