#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, cont=0;
    cin >> n;
    char s[n];
    cin >> s;
   	for(int i=0; i<n-1; i++){
   		if(s[i]==s[i+1]) cont++;
   	}
   	cout << cont;
    return 0;
}
