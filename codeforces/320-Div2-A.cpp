// Magic Numbers
#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	string a;
	cin >> a;
	int tam = a.size();
	bool flag = true;
	if(a[0] != '1') flag = false;
	for(int i = 0; i < tam; i++){
		if(a[i] != '4' and a[i] != '1') flag = false;
		if(i < tam - 2){
			if(a[i] == '4' and a[i+1] == '4' and a[i+2] == '4') flag = false;
		}
		if(!flag){
			puts("NO");
			break;
		}
	}
	if(flag) puts("YES");
}
