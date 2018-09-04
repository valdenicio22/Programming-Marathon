#include <bits/stdc++.h>

using namespace std;

int main(){

    int v[100];
    for (int i=0;i<6;i++)
        cin >> v[i];
    if (v[0] > v[3])
        cout << "A" << endl;

    else if (v[0] == v[3]){
        if (v[1] > v[4]){
            cout << "A" << endl;
        }
        else if (v[1] == v[4]){
            if (v[2] > v[5]){
                cout << "A" << endl;
            }
            else{
            cout << "B" << endl;
            }
        }
        else{
            cout << "B" << endl;
        }
    }
    else
        cout << "B" << endl;

return 0;
}
