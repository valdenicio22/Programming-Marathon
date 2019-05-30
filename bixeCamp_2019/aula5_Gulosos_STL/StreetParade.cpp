#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, x;
  while(cin >> n and n){
    stack<int> st;
    int cont=1;
    for(int i=0;i<n;i++){
      cin >> x;
      if (x == cont) cont++;
      else st.push(x);
      while (!st.empty() && cont == st.top()){
        st.pop();
        cont++;
      }
    }
    cout << (st.empty() ? "yes" : "no") << endl;
  }

  return 0;
}
