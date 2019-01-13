// Words
#include<bits/stdc++.h>
using namespace std;
int contm, contM;

int main(){
	char s[100];
	cin >> s;

	for(int i=0; i<strlen(s); i++){
		if(64<s[i] && s[i]<91) contM++;
		else contm++;
	}

	for(int i=0; i<strlen(s); i++){
		if(contm>contM && (64<s[i] && s[i]<91)) s[i]+=32;
		if(contm<contM && (s[i]>90)) s[i]-=32;
		if(contm==contM && (64<s[i] && s[i]<91)) s[i]+=32;

		cout<< s[i]; 
	}

	return 0;
}
