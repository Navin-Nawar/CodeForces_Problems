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
    int n;cin>>n;
    vector<int>v(n),pref(n+1,0);
    f(i,0,n)cin>>v[i];
    f(i,0,n)pref[i+1]=pref[i]+v[i];

    int q;cin>>q;
    while(q--){
        int x;cin>>x;
        int lb=lower_bound(pref.begin(),pref.end(),x)-pref.begin();
        print(lb);

    }

}

int main() {
    fastio;
    solve();
    return 0;
}