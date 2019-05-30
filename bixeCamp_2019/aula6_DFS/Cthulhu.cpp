#include <bits/stdc++.h>
#define MAXN 110

using namespace std;

vector<int>adj[MAXN];
int visited[MAXN];

void dfs(int u){
  visited[u] = 1;
  for(auto it : adj[u]){
    if (visited[it] != 1)
      dfs(it);
  }
}

int main(){

  int n,m; cin >> n >> m;
  for(int i=0;i<m;i++){
    int x, y; cin >> x >> y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }
  dfs(1);
  bool ans = (m==n);
  for (int i=1;i<=n && ans;i++)
    if (!visited[i]) ans = false;

  if (ans) cout << "FHTAGN!" << endl;
  else cout << "NO" << endl;

  return 0;
}
