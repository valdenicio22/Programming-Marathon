#include <bits/stdc++.h>

using namespace std;

struct camp{
    int id = -1, p=0, pF=0, pS = 0;
    double mediaCestas = 0;
};

bool comp(camp a, camp b){

    if(a.p == b.p){
        if (a.mediaCestas == b.mediaCestas){
            if (a.pF == b.pF){
                return a.id > b.id;
            }else return a.pF > b.pF;
        } else return a.mediaCestas > b.mediaCestas;
    }
    return a.p > b.p;
}

int main(){
    int n, t1, p1, t2, p2, inst=1;
    while(cin >> n && n != 0){

        camp times[n];
        int tam = (n*(n-1))/2;

        for(int i=0;i<tam;i++){
            cin >> t1 >> p1 >> t2 >> p2;
            times[t1-1].id = t1;
            times[t1-1].pF += p1;
            times[t1-1].pS += p2;
            times[t2-1].id = t2;
            times[t2-1].pF += p2;
            times[t2-1].pS += p1;

            if (p1 > p2) {
                times[t1-1].p +=2;
                times[t2-1].p +=1;
            }else {
                times[t2-1].p +=2;
                times[t1-1].p +=1;
            }
        }
        for(int i=0;i<n;i++){
            if (times[i].pS == 0) times[i].mediaCestas = times[i].p;
            else times[i].mediaCestas = double(times[i].pF) / double(times[i].pS);
        }

        sort(times, times+n, comp);

        if (inst > 1) cout << endl;

        cout << "Instancia " << inst++ << endl;
        for(int i=0;i<n;i++){
            cout << ((i>0) ? " " : "") << times[i].id;
        }cout << endl;
    }

return 0;
}
