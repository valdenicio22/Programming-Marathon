#include <bits/stdc++.h>
#define MAXN 1010
using namespace std;

int cmp(int i, int j){
    return i>j;
}

int res(int v[], int a[], int t){
    int cont=0;
    for(int i=0;i<t;i++){
        if (v[i] == a[i]) cont++;
    }
    return cont;
}

int main(){

    int v[MAXN], aux[MAXN];
    int x, y;
    cin >> x;
    while(x--){
        cin >> y;
        for(int i=0;i<y;i++) {
            cin >> v[i];
        }
        copy(v,v+y,aux);
        sort(v,v+y,cmp);
        cout << res(v,aux,y) << endl;
    }
}
