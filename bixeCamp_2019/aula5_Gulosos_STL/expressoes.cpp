#include <bits/stdc++.h>

using namespace std;

int n;
string s;

int main(){

  cin >> n;
  for(int i=0;i<n;i++){
    stack<int> st;
    cin >> s;
    for(int i=0;i<s.length();i++){
      if (s[i] == '(' || s[i] == '[' || s[i] == '{'){
        st.push(s[i]);
      }else if (!st.empty()){
        if (s[i] == ')' && st.top() == '(') st.pop();
        else if (s[i] == ']' && st.top() == '[') st.pop();
        else if (s[i] == '}' && st.top() == '{') st.pop();
        else break;
      }else st.push(s[i]);
    }
    cout << (st.empty() ? "S" : "N") << endl;
  }
  return 0;
}
