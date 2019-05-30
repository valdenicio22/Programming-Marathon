#include <bits/stdc++.h>
#define MAXN 1010
using namespace std;

vector<int> adj[MAXN];
int visited[MAXN];

void dfs(int u){
  visited[u] = 1;
  for(auto v : adj[u]){
    if (!visited[v]){
      visited[v] = 1;
      dfs(v);
    }
  }
}

int main(){

  int n, m; cin >> n >> m;
  for(int i=0;i<m;i++){
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  int cont=0;
  for(int i=1;i<=n;i++){
    if (!visited[i]){
      dfs(i);
      cont++;
    }
  }
  cout << cont << endl;

  return 0;
}
