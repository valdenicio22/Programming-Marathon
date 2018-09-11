#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int v[n] , aux=0, s=0;
    for (int i=1;i<=n;i++){
        scanf("%d", &v[i]);
        s+=v[i];
    }
    for (int i=1;i<=n;i++){
        aux += v[i];
        if(aux== s/2) {
            cout << i << endl;
            break;
        }
    }
return 0;
}
