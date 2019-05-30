#include <bits/stdc++.h>
#define MAXN 100010
using namespace std;

int ps[MAXN];

int bb(int idps, int ini, int end, int t){
  int v, ans=-1;
  while(ini <= end){
    int mid = (ini+end)/2;
    v = ps[mid] - ps[idps];
    if (t < v){
      end = mid - 1;
    }else{
      ans = mid;
      ini = mid + 1;
    }
  }
  return ans;
}

int main(){

  int n, t;
  cin >> n >> t;
  int x;
  for(int i=1;i<=n;i++){
    cin >> x;
    ps[i] = ps[i-1] + x;
  }
  int res=0, ans=0;
  for (int i=1;i<=n;i++){
    res = bb(i-1,i,n,t);
    ans = max(ans, res - i + 1);
  }
  cout << ans << endl;


  return 0;
}
