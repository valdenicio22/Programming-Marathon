#include <bits/stdc++.h>
#define MAXN 10100
using namespace std;

int x;
char p1[MAXN], p2[MAXN];

int dist(char l1, char l2){
  if (l2 >= l1) return abs(l2-l1);
  return abs('z'-l1)+abs(l2-'a'+1);
}

int main(){

    scanf("%d", &x);
    for (int i=0;i<x;i++){
      scanf("%s %s", p1, p2);
      int sum=0;
      for(int j=0;p1[j] != '\0';j++){
        sum+= dist(p1[j], p2[j]);
      }
      printf("%d\n", sum);
    }

  return 0;
}
