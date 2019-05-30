#include <bits/stdc++.h>

using namespace std;

int n, m;

bool comp (int a, int b){

    if (b%m == a%m){
      if(abs(a)%2 ==abs(b)%2){
        if(a%2 != 0) return a>b;
        return b > a;
      }
      return abs(a)%2 > abs(b)%2;
    }
    return a%m < b%m;
}

int main(){

  while(cin >> n >> m && n){
    int vet[n+5];
    for(int i=0;i<n;i++){
      cin >> vet[i];
    }
    sort(vet, vet+n, comp);

    cout << n << " " << m << endl;
    for(int i=0;i<n;i++){
      cout << vet[i] << endl;
    }
  }
  cout << "0 0" << endl;
  return 0;
}
