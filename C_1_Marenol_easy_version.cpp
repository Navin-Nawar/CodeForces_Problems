#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n;
    cin >> n;

    string a, b;
    cin >> a >> b;

    string ae, ao, be, bo;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            if (a[i] == '1') ae += '1';
            if (b[i] == '1') be += '1';
        } else {
            if (a[i] == '1') ao += '1';
            if (b[i] == '1') bo += '1';
        }
    }

    if (ae == be && ao == bo)
        yes;
    else
        no;
}

int main() {
    fastio;

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}