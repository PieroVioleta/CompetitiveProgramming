//Drinks

#include <bits/stdc++.h>

using namespace std;

int sum;

int main() {

 	double a, n;
	scanf("%lf", &n);
  
	for(int i = 0; i < n; i++){
		scanf("%lf", &a);
		sum+=a;
	}
  
	printf("%.10lf", sum/n);
	return 0;
}
