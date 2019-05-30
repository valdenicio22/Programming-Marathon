#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> pii;

int freq[150];
set<pii> myset;

int main(){

  string word;
  while(getline(cin, word)){
    memset(freq, 0, sizeof(freq));
    for(int i=0;i<word.size();i++){
      int value = (int)word[i];
      freq[value]++;
      myset.insert({freq[value], value});
    }
    for(auto it : myset){
      cout << it.second << " " << it.first << endl;
    }
  }

  return 0;
}
