//Way Too Long Words
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	char s[100];
	for(int i = 0; i < n; i++){
		cin >> s;
		int tam = strlen(s);
		if(tam <= 10) cout << s;
		else{
			cout << s[0] << tam-2 << s[tam-1];
		}
		cout << endl;
	}
	return 0;
}
