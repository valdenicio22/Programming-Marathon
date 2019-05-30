#include <bits/stdc++.h>

using namespace std;

int freq[15];

int main(){

    int k, aux=0;
    cin >> k;
    string n;
    for(int i=0;i<4;i++){
        cin >> n;
        for(int j=0;j<4;j++){
            if (n[j] != '.'){
                freq[(n[j] - '0')]++;
            }
        }
    }
    for(int i=0;i<10;i++){
        if(freq[i] > 2*k){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

return 0;
}
