#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, x,aux;
    cin >> n >> x;
    aux=x;
    for (int i=0;i<n-1;i++){
        cin >> x;
        if (x < aux) aux=x;
    }
    cout << aux << endl;

return 0;
}
