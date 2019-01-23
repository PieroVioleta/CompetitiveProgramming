//Hot Bath
#include <bits/stdc++.h>
using namespace std;
long long r1,r2,t1,t2,x1,x2,t0;

int main(){
  double r=100000000;
  cin>>t1>>t2>>x1>>x2>>t0;
  
  while(x1>=0 && x2>=0){
    double t=(x1*t1+x2*t2)/double(x1+x2);
    if(t < t0){
    	x1--; continue;
    }
    if(t<r){
    	r=t; r1=x1; r2=x2;
    }
    x2--;
  }
  cout<<r1<<" "<<r2;
  return 0;
}
