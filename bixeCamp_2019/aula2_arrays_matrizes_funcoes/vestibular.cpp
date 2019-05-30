#include <bits/stdc++.h>

using namespace std;

int main(){

    int x, cont=0;
    cin >> x;
    char res[x], l;
    for(int i=0;i<x;i++) cin >> res[i];
    for(int i=0;i<x;i++){
        cin >> l;
        if (res[i] == l) cont++;
    }
    cout << cont << endl;


return 0;
}
