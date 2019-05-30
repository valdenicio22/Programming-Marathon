#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;

const int MAXN = 1e3 + 10;
const int INF = 1e9 + 10;

int dist[MAXN][MAXN];
int grid[MAXN][MAXN];

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, 1, -1};
int n;

bool fora(int i, int j){
  return i < 0 or i >= n or j < 0 or j >= n;
}

int dijkstra(int i, int j){
  memset(dist, INF, sizeof dist);
  priority_queue<piii, vector<piii>, greater<piii> > pq;
  dist[i][j] = 0;
  pq.push({dist[i][j],{i, j}});

  while(!pq.empty()){
    int p = pq.top().first;
    int i = pq.top().second.first;
    int j = pq.top().second.second;
    pq.pop();
    if (p > dist[i][j]) continue;

    for(int k=0;k<4;k++){
      int ii = i + dx[k];
      int jj = j + dy[k];
      int custo = dist[i][j]+grid[ii][jj];

      if (!fora(ii, jj) && custo<dist[ii][jj]){
          dist[ii][jj] = custo;
          pq.push({dist[ii][jj],{ii, jj}});
      }
    }
  }
  return dist[n-1][n-1];
}


int main(){

  cin >> n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin >> grid[i][j];
    }
  }
  cout << dijkstra(0, 0) << endl;


  return 0;
}
