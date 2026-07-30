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
    int total,r,g;cin>>total>>r>>g;
   int base = r / (g + 1);
int extra = r % (g + 1);

for (int i = 0; i <= g; i++) {
    int cnt = base;
    if (extra) {
        cnt++;
        extra--;
    }

    while (cnt--) cout << 'R';

    if (i != g) cout << 'B';
}
cout <<endl;
}

int main() {
    fastio;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}