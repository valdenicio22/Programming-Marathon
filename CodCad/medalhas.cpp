#include <bits/stdc++.h>

using namespace std;

int main(){

        int a, b, c;
        cin >> a >> b >> c;

        if (a < b && a < c){
            cout <<"1\n";
            if (b < c) cout << "2\n3\n";
            else cout << "3\n2\n";
        }
        else if (b < a && b < c){
            cout <<"2\n";
            if (a < c) cout << "1\n3\n";
            else cout << "3\n1\n";
        }
        else if (c < b && c < a){
            cout <<"3\n";
            if (a < b) cout << "1\n2\n";
            else cout << "2\n1\n";
        }

return 0;
}
