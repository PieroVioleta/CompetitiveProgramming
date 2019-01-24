// Is your horseshoe on the other hoof?

#include <bits/stdc++.h>
using namespace std;
int a[5], ans = 3;
int main() {
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }
    sort(a, a + 4);
    for (int i = 0; i < 3; i++) {
        if (a[i] != a[i + 1]) {
            ans--;
        }
    }
    cout << ans;
}
