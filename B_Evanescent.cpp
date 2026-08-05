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

int main() {
    fastio;

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int base = 1;

        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1]) base++;
        }

        int ans = INT_MAX;

        for (int i = 1; i <= n - 2; i++) {
            int cur = base;

            if (s[i] != s[i - 1]) cur--;
            if (s[i] != s[i + 1]) cur--;

            if (s[i - 1] != s[i + 1]) cur++;

            ans = min(ans, cur);
        }

        cout << ans << '\n';
    }

    return 0;
}