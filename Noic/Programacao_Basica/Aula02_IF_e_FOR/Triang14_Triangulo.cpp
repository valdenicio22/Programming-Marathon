#include <bits/stdc++.h>

using namespace std;

int v[10];

bool cmp(int a, int b){
	return a>b;
}

int main(){

	for(int i=0;i<4;i++) scanf("%d", &v[i]);
	sort(v, v+4, cmp);
	if(v[0] < (v[1]+v[2]) || v[1] < (v[2]+v[3])) printf("S\n");
	else printf("N\n");

	return 0;
}
