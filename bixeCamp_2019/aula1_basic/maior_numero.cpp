#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    int maior = n;
    while(cin >> n && n != 0){
        if (n > maior) maior = n;
    }
    cout << maior << endl;

return 0;
}
