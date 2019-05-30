#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, x;
  cin >> n;

  priority_queue<int, vector<int>, greater<int>> pqP;
  priority_queue<int> pqI;

  for(int i=0;i<n;i++){
    cin >> x;
    if (x%2 == 0) pqP.push(x);
    else pqI.push(x);
  }
  while(!pqP.empty()){
    cout << pqP.top() << endl;
    pqP.pop();
  }
  while(!pqI.empty()){
    cout << pqI.top() << endl;
    pqI.pop();
  }

  return 0;
}
