// Bear and Big Brother

#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int a, b, cont=0;
	scanf("%d %d", &a, &b);
	do{
		a*=3;
		b*=2;
		cont+=1;
	} while(a<=b);
	cout << cont;
	return 0;
}
