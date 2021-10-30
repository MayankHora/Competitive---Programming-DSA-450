#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define t()  int test; cin >> test; while (test--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
  ll p,a,b,c; cin>>p>>a>>b>>c;
    ll a1,b1,c1;
    a1=p%a; b1=p%b; c1=p%c;
    if(a1==0||b1==0||c1==0) {cout<<"0\n"; return;}
    ll m=min(a-a1,min((b-b1),(c-c1)));
    cout<<m<<'\n';
}
int main(){
fast;
t()
solve();
return 0;
}
