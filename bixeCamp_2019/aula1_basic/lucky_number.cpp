#include <bits/stdc++.h>

using namespace std;

int main(){

    string n;
    cin >> n;
    int cont=0;
    for(int i=0;i<n.length();i++){
        if (n[i] == '4' || n[i] == '7') cont++;
    }
    if (cont == 4 || cont == 7) cout << "YES" << endl;
    else cout << "NO" << endl;

return 0;
}
