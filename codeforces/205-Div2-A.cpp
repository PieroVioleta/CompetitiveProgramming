// Little Elephant and Rozdil

#include <bits/stdc++.h>
using namespace std;
vector <pair <int,int> >v;
int i,n,x;
int main()
{
    cin>>n;
    for (i=1;i<=n;i++){
        cin>>x;
        v.push_back(make_pair(x,i));
    }
    sort(v.begin(),v.end());
    if (v[0].first==v[1].first)cout<<"Still Rozdil";
    else cout<<v[0].second;
    return 0;
}
