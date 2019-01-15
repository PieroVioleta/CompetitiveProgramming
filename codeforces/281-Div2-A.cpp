#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[1000];
	cin >> s;

	if(islower(s[0])) s[0]=toupper(s[0]);

	for(int i=0; i<strlen(s); i++ ){
		cout << s[i];
	}

	return 0;
}
