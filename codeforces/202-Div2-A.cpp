//LLPS
#include<bits/stdc++.h>
using namespace std;
bool palindrom(string s){
	string s1 = s;
	reverse(s.begin(), s.end());
	if(s == s1) return true;
	else return false;
}
int main(){
	string s;
	cin >> s;
	vector <string> container_of_container;
	for(int mask = 0; mask < (1 << s.size()); mask++){
 		string container;
		for(int bit = 0; bit < s.size(); bit++){
			if((mask >> bit) & 1) container.push_back(s[bit]);
		}
		if(palindrom(container)) container_of_container.push_back(container);
	}
	sort(container_of_container.begin(), container_of_container.end());
	cout << container_of_container[container_of_container.size()-1];	
    return 0;
}
