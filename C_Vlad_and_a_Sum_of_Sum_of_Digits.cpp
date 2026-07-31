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

int precompute(int p) {
    int sum = 0;
    while (p) {
        sum += p % 10;
        p /= 10;
    }
    return sum;
}

int main() {
    fastio;

    const int N = 2e5 + 7;

    vector<int> pref(N + 1, 0);

    // pref[i] = digitSum(1) + digitSum(2) + ... + digitSum(i)
    for (int i = 1; i <= N; i++) {
        pref[i] = pref[i - 1] + precompute(i);
    }

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        print(pref[n]);
    }

    return 0;
}