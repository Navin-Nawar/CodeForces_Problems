#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define print(x) cout << x << '\n'
#define prints(x) cout << x << ' '
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define f(i,a,b) for(int i = a; i < b; i++)
#define fr(i,a,b) for(int i = a; i >= b; i--)

void solve() {
    ll n,q;
    cin>>n>>q;
    vector<ll>vn(n),pref(n+1,0),mx;
    f(i,0,n)cin>>vn[i];

    f(i,0,n)pref[i+1]=pref[i]+vn[i];
    mx.push_back(vn[0]);
    f(i,1,n){
        ll dhukao=max(vn[i],mx[i-1]);
        mx.push_back(dhukao);
    }

    while(q--){
        ll x;cin>>x;
        ll ub=upper_bound(mx.begin(),mx.end(),x)-mx.begin();

        prints(pref[ub]);
    }
   cout<<endl;

    


}

int main() {
    fastio;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}