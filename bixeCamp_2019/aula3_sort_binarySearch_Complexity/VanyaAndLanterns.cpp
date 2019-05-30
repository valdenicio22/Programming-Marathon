#include <bits/stdc++.h>
using namespace std;

int main(){

  int n, l;
  cin >> n >> l;
  int v[n+5];
  for(int i=0;i<n;i++){
    cin >> v[i];
  }
  sort(v, v+n);
  int difini = v[0];
  int diffim = l - v[n-1];
  double max_dist = max(diffim, difini);

  for(int i=0;i<n-1;i++)
    max_dist = max(max_dist , (abs(v[i] - v[i+1])/2.0));

  printf("%.9lf\n", max_dist);

  return 0;
}
