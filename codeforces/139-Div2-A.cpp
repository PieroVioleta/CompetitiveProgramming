//Petr and book

#include <bits/stdc++.h>
using namespace std;
int sum;
int main() {
	int n, i = 0;
	cin >> n;
	int arr[7];
	for(int i = 0; i < 7; i++) cin >> arr[i];
	do{
		sum += arr[i%7];
		i++;
	} while(sum<n);
	if(i%7 == 0) cout << 7;
	else cout << (i)%7;
	return 0;
}
