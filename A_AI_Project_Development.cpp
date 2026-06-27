#include <bits/stdc++.h>
#include <cmath>
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
    long long n, x, y, z;
    cin >> n >> x >> y >> z;
    
    long long total;
    if (n <= z * x) {
        total = ceil((double)n / x);
    } else {
        long long remaining_lines = n - (z * x);
        long long active_speed = 10 * y + x;
        total = z + ceil((double)remaining_lines / active_speed);
    }

    long long total2 = ceil((double)n / (x + y));
    
    print(min(total, total2));
}

int main() {
    fastio;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}