#include <bits/stdc++.h>
#define MAXN 10010
#define INF 1000000010
using namespace std;
typedef pair<int,int> pii;

vector<int> adj[MAXN];
int dist[MAXN], visited[MAXN];

int x, mV, ans;

void bfs(int ini){
  queue<pii> q;
  dist[ini] = 0;
  visited[ini] = 1;
  q.push({dist[ini], ini});
  while(!q.empty()){
    int u = q.front().second;
    q.pop();
    for(auto it : adj[u]){
      if (dist[u] + 1 > dist[it] && dist[it] == -1){
        mV = it;
        ans = dist[u] + 1;
        dist[it] = ans;
        q.push({dist[it], it});
      }
    }
  }
}

void default_values(){
  for(int i=1;i<=x;i++){
    dist[i] = -1;
    //adj[i].clear();
    visited[i] = 0;
  }
}


int main(){


  scanf("%d", &x);

  default_values();
  for(int i=1;i<=x-1;i++){
    int u, v;
    scanf("%d %d", &u, &v);
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  bfs(1);
  default_values();
  bfs(mV);
  cout << ans << endl;

  return 0;
}
