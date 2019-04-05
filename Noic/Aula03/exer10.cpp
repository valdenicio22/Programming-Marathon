#include <bits/stdc++.h>
#define MAXN 1010
using namespace std;

int n;
char f[MAXN];

void func1(char l[]){
  for(int i=0;l[i] !='\0';i++){
    if (l[i] >= 'a' && l[i] <= 'z' || l[i] >= 'A' && l[i] <= 'Z'){
      l[i]+= 3;
    }
  }
}

void func3(char l[]){
  int t = strlen(l);
  for (int i=t/2;i<t;i++){
    l[i] -=1;
  }
}

int main(){
  scanf("%d", &n);
  getchar();
  for(int i=0;i<n;i++){
    scanf("%[^\n]", f);
    getchar();
    int t = strlen(f);

    func1(f);
    reverse(f, f+t);
    func3(f);
    printf("%s\n", f);
  }

  return 0;
}
