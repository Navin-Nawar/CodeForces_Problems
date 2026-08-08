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
    int x, y;
    cin >> x >> y;

    vector<int> vx1, vx2, vy1, vy2;

    int basemxx = 0, basemxy = 0;

    int kx1;
    cin >> kx1;
    f(i,0,kx1) {
        int p;
        cin >> p;
        vx1.push_back(p);
    }

    basemxx = max(basemxx, vx1[kx1-1] - vx1[0]);

    int kx2;
    cin >> kx2;
    f(i,0,kx2) {
        int p;
        cin >> p;
        vx2.push_back(p);
    }

    basemxx = max(basemxx, vx2[kx2-1] - vx2[0]);

    int ky1;
    cin >> ky1;
    f(i,0,ky1) {
        int p;
        cin >> p;
        vy1.push_back(p);
    }

    basemxy = max(basemxy, vy1[ky1-1] - vy1[0]);

    int ky2;
    cin >> ky2;
    f(i,0,ky2) {
        int p;
        cin >> p;
        vy2.push_back(p);
    }

    basemxy = max(basemxy, vy2[ky2-1] - vy2[0]);

    ll ans1 = 1LL * basemxx * y;
    ll ans2 = 1LL * basemxy * x;

    cout << max(ans1, ans2) << '\n';
}

int main() {
    fastio;

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}