// Beautiful year 

#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n;
	scanf("%lli", &n);
	n++;
	for(n; n<=9012; n++){
		int m = n/1000, c= (n/100)%10, d = (n/10)%10, u = n%10;
		if(m!=c and m!=d and m!=u and c!=d and c!=u and d!=u){cout << n; break;}
	}
	return 0;
}
