// Nice Garland

#include <bits/stdc++.h>
using namespace std;

int a[6];

int comp(int n, char s1[], char s2[]);

int main() {
	int n, j = 0;
	scanf("%d", &n);
	char s[n], s1[n];
	cin >> s;
	char perm[3] = {'B', 'G', 'R'};
	do{
		for(int i = 0; i < n; i++){
			s1[i] = perm[i%3];
		}
		a[j] += comp(n, s, s1);
		j++;
	} while(next_permutation(perm, perm+3));
	int ans = *min_element(a, a+6);
	int pos = min_element(a, a+6) - a;
	cout << ans  << endl;
	int cont = 0;
	do{
		for(int i = 0; i < n; i++){
			s1[i] = perm[i%3];
		}
		a[j] += comp(n, s, s1);
		if(cont == pos){
			for(int i = 0; i < n; i++){
				cout << s1[i];
			}
			break;
		}
		else cont++;
	} while(next_permutation(perm, perm+3));

}

int comp(int n, char s1[], char s2[]){
	int cont = 0;
	for(int i = 0; i < n; i++){
		if(s1[i] != s2[i]) cont++; 
	}
	return cont;
}
