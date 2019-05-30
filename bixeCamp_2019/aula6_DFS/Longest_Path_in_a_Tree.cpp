#include <bits/stdc++.h>
#define MAXN 10005
using namespace std;

vector<int> adj[MAXN];
int visited[MAXN];
int maior=0, v;

void dfs(int u, int dist){
  visited[u] = 1;
  if (dist > maior) {
    maior = dist;
    v = u;
  }
  for(auto it : adj[u]){
    if(!visited[it]){
      dfs(it, dist+1);
    }
  }
}

int main(){

  int n; cin >> n;
  int x, y;
  for(int i=1;i<n;i++){
    cin >> x >> y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }
  dfs(1, 0);
  memset(visited, 0, sizeof(visited));
  maior = 0;
  dfs(v, 0);
  cout << maior << endl;

  return 0;
}
