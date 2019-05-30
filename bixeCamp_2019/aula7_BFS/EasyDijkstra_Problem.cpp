#include <bits/stdc++.h>
#define MAXN 10010
#define INF 1000000010
using namespace std;
typedef pair<int,int> pii;

vector<pii> adj[MAXN];
int dist[MAXN], visited[MAXN];

int dijkstra(int beg, int end){
  priority_queue<pii, vector<pii>, greater<pii> > pq;
  dist[beg] = 0;
  pq.push({dist[beg], beg});
  while(!pq.empty()){
    int u = pq.top().second;
    pq.pop();
    if(visited[u]) continue;
    visited[u] = 1;
    for(auto par : adj[u]){
      int v = par.first;
      int w = par.second;
      if (dist[u] + w < dist[v]){
        dist[v] = dist[u] + w;
        pq.push({dist[v], v});
      }
    }
  }
  return dist[end];
}

int main(){

  int x;
  scanf("%d", &x);
  while(x--){
    int nv, e;
    scanf("%d %d",&nv, &e);

    for (int i=1;i<=nv;i++){
      adj[i].clear();
      visited[i] = 0;
      dist[i] = INF;
    }

    for(int i=1;i<=e;i++){
      int u, v, w;
      scanf("%d %d %d", &u, &v, &w);
      adj[u].push_back({v, w});
    }

    int beg, end;
    scanf("%d %d", &beg, &end);
    int ans = dijkstra(beg, end);
    if (ans >= INF) printf("NO\n");
    else printf("%d\n", ans);


  }

  return 0;
}
