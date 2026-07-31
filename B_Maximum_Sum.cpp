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
    int n, k;
    cin >> n >> k;

    vector<ll> v(n);

    f(i,0,n) cin >> v[i];

    sort(all(v));

    vector<ll> pref(n + 1, 0);

    f(i,0,n){
        pref[i + 1] = pref[i] + v[i];
    }

    ll ans = 0;

    for(int i = 0; i <= k; i++){
        ans = max(ans, pref[n - (k - i)] - pref[2 * i]);
    }

    cout << ans << '\n';
}

int main() {
    fastio;

    int t;
    cin >> t;

    while(t--) solve();

    return 0;
}