#include <bits/stdc++.h>

using namespace std;

int main(){

    char l;
    int x, s=0;
    cin >> x;
    for (int i=0;i<x;i++){
        cin >> l;
        if (l == 'A') s+=1;
        else if (l == 'C') s+=2;
        else if (l == 'P') s+=2;
    }
    cout << s << endl;

return 0;
}
