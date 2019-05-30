#include <bits/stdc++.h>
#define MAXN 3000005

using namespace std;

int freq[MAXN];

int main(){
    int x, n;
    scanf("%d", &x);
    while(x--){
        int maior=-1, menor=250;
        memset(freq, 0, sizeof(freq));
        scanf("%d", &n);
        int v[n];
        for(int i=1;i<=n;i++){
            scanf("%d", &v[i]);
            freq[v[i]]++;
            if (v[i] > maior) maior = v[i];
            if (v[i] < menor) menor = v[i];
        }
        for(int i=menor;i<=maior;i++){
            if (freq[i] != 0){
                for(int j=1;j<=freq[i];j++){
                    if (i == maior && j == freq[i]) cout << i << endl;
                    else cout << i << " ";
                }
            }
        }
    }
return 0;
}
