#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int res = min((p/np), min(((k*l)/nl), (c*d)))/n;
    cout << res << endl;



return 0;
}
