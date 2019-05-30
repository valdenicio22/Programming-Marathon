#include <bits/stdc++.h>
#define MAX 10100
using namespace std;

int verifica(char l1, char l2){
    if (l2 >= l1) return abs(l2-l1);
    return abs(l2-'a'+1) + abs('z' - l1 );
}

int main(){

    int n;
    scanf("%d", &n);
    char f1[MAX], f2[MAX];
    for(int i=0;i<n;i++){
        scanf(" %s %s", f1, f2);
        int sum=0;
        for(int j=0;f1[j]!='\0';j++){
            sum+= verifica(f1[j], f2[j]);
        }
        cout << sum << endl;
    }

return 0;
}
