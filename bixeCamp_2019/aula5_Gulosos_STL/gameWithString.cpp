#include <bits/stdc++.h>

using namespace std;

string s;
stack<char> st;
int cont=0;

int main(){

  cin >> s;
  for(int i=0;i<s.length();i++){
    if (!st.empty() && s[i] == st.top()){
      cont++;
      st.pop();
    }else{
      st.push(s[i]);
    }
  }
  cout << (cont % 2 == 0 ? "No" : "Yes") << endl;

  return 0;
}
