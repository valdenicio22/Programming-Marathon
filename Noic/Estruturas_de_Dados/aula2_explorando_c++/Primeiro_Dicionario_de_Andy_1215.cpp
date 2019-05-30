#include <bits/stdc++.h>

using namespace std;


int main(){

  char c;
  string str;
  set<string> arr;
  while(cin.get(c)){
    if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z'){
      str+=tolower(c);
    }else{
      arr.insert(str);
      str.clear();
    }
  }
  if (!str.empty())
    arr.insert(str);
  for (auto it : arr){
    if (it != "\0" || it != "\n")
    cout << it << endl;
  }


  return 0;
}
