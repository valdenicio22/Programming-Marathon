#include <bits/stdc++.h>
#define MAXN 55
using namespace std;

char grid[MAXN][MAXN];
int dist[MAXN][MAXN];

int di[] = {1, -1, 0, 0, 1, 1, -1, -1};
int dj[] = {0, 0, 1, -1, -1, 1, 1, -1};
int h, w;

bool fora(int i, int j){
    return i < 0 || i >= h || j < 0 || j >= w;
}

int bfs(int i, int j){
  int cont = 0;
  queue<pair<int, int> > list;
  memset(dist, -1, sizeof dist);
  dist[i][j] = 1;
  list.push({i, j});
  while(!list.empty()){
    auto it = list.front();
    list.pop();
    int i = it.first;
    int j = it.second;
    cont = max(cont, dist[i][j]);
    for (int k=0;k<8;k++){
      int ii = i + di[k];
      int jj = j + dj[k];
      if (fora(ii, jj) || dist[ii][jj] != -1) continue;
      if (grid[i][j]+1 != grid[ii][jj]) continue;

      dist[ii][jj] = dist[i][j]+1;
      list.push({ii, jj});
    }
  }
  return cont;
}

int main(){

  int res = 0;
  while (cin >> h >> w and h+w) {
    for(int i = 0; i < h; i++)
        cin >> grid[i];
    int ans = 0;
    for(int i = 0; i < h; i++){
      for(int j = 0; j < w; j++){
        if(grid[i][j] == 'A'){
          ans = max(ans, bfs(i, j));
        }
      }
    }
    cout << "Case " << ++res <<": " << ans << endl;
  }

  return 0;
}
