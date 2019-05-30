#include <bits/stdc++.h>
#define MAXN 110
#define pb push_back
using namespace std;

vector<int> adj[MAXN];
int visited[MAXN];
int dist[MAXN], max_dist = INT_MIN, ans, cont=0;

void dfs(int v){
  for(auto it : adj[v]){
    if (dist[it] == -1){
      dist[it] = dist[v] + 1;
      dfs(it);
    }
    if(dist[v] > max_dist)
      max_dist = dist[v];
  }
}

int main(){

  int n;
  while(cin >> n && n){

    for(int i=1;i<=n;i++)
      adj[i].clear();

    for(int i=0;i<n-1;i++){
      int a, b; cin >> a >> b;
      adj[a].pb(b);
      adj[b].pb(a);
    }

    int last_dist = INT_MAX;

    for(int i=1;i<=n;i++){
      memset(dist, -1, sizeof(dist));
      dist[i] = 0;
      dfs(i);
      if (last_dist > max_dist){
        ans = i;
        last_dist = max_dist;
      }
      max_dist = INT_MIN;
    }
    cout << "Teste " << ++cont << endl;
    cout << ans << endl;

  }

  return 0;
}
