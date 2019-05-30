#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define fst first
#define snd second
#define fr(i, n) for(int i=0;i<n;i++)
#define frr(i, n) for(int i=1;i<=n;i++)
#define ms(x, i) memset(x, i, sizeof(x))

typedef pair<int, int> pii;
typedef long long int ll;

//const int MAXN = 1e3 + 10;
//const int INF = 1e9 + 10;

int dx[] = {2, 1, 2, 1, -2, -1, -2, -1};
int dy[] = {1, 2, -1, -2, -1, -2, 1, 2};
int dist[10][10];
pii ini, fim;

bool fora(int i, int j){
  return i < 0 || i >= 8 || j < 0 || j >= 8;
}

int bfs(){

  queue<pii> q;
  memset(dist, -1, sizeof(dist));
  dist[ini.fst][ini.snd] = 0;
  q.push(ini);
  while(!q.empty()){
    pii u = q.front();
    q.pop();
    int x = u.fst;
    int y = u.snd;
    if (u == fim) return dist[x][y];

    for(int k=0;k<8;k++){
      int ii = x+dx[k];
      int jj = y+dy[k];
      if (!fora(ii,jj) && dist[ii][jj] == -1){
        q.push({ii, jj});
        dist[ii][jj] = dist[x][y]+1;
      }
    }
  }
}

int main(){

  int t;
  scanf("%d", &t);
  while(t--){
    char cx, cy;
    int x, y;
    cin >> cx >> x >> cy >> y;
    ini = {cx-'a', x-1};
    fim = {cy-'a', y-1};
    cout << bfs() << endl;
  }

  return 0;
}
