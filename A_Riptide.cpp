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
    int a,b,c;
    cin>>a>>b>>c;
    vector<int>v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);

    sort(all(v));

    int ans1=v[1]-v[0];
    int ans2=v[2]-v[1];

    int mn=min(ans1,ans2);

    cout<<mn<<endl;
}

int main() {
    fastio;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}