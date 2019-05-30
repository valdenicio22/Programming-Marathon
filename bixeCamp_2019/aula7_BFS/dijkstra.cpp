#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
typedef long long ll;

const int MAXN = 1e5 + 10;
const ll INF = 1e12 + 10;


ll dist[MAXN];
int pai[MAXN], visited[MAXN];;
vector<pii> adj[MAXN];
int n, m;

ll dijkstra(int ini){

  priority_queue<pair<ll, int> >pq;
  dist[ini] = 0;
  pq.push({-dist[ini], ini});

  while(!pq.empty()){
    int u = pq.top().second;
    pq.pop();
    if (visited[u]) continue;
    visited[u] = 1;
    for(auto it : adj[u]){
      int v = it.first;
      int w = it.second;
      if(dist[u] + w < dist[v]){
        pai[v] = u;
        dist[v] = dist[u] + w;
        pq.push({-dist[v], v});
      }
    }
  }
  return dist[n];
}

void path(int v){
  stack<int> st;
  while(v != -1){
    st.push(v);
    v = pai[v];
  }
  cout << st.top(); st.pop();
    while(!st.empty()){
        cout << " " << st.top();
        st.pop();
    }
    cout << endl;
}

void default_values(){

    pai[1] = -1;
    for(int i=2;i<=n;i++)
      pai[i] = 0;
    for(int i=1;i<=n;i++){
      dist[i] = INF;
      visited[i] = 0;
      adj[i].clear();
    }
}

int main(){

  scanf("%d %d", &n, &m);
  default_values();
  for(int i=1;i<=m;i++){
    int a, b, w;
    scanf("%d %d %d", &a, &b, &w);
    adj[a].push_back({b, w});
    adj[b].push_back({a, w});
  }
  ll ans = dijkstra(1);

  if(ans >= INF) printf("-1\n");
  else path(n);

  return 0;
}
