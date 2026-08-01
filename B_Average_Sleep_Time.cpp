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

    vector<long double> v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];

    long double ans = 0;

    // First window sum
    for(int i = 0; i < k; i++)
        ans += v[i];

    long double prevsum = ans, currsum = 0;

    int l = 0, r = k;

    while(r < n) {
        currsum = prevsum + v[r] - v[l];
        ans += currsum;
        prevsum = currsum;
        l++;
        r++;
    }

    long double ans2 = ans / (n - k + 1);

    cout << fixed << setprecision(6) << ans2 << endl;
}

int main() {
    fastio;
    solve();
    return 0;
}