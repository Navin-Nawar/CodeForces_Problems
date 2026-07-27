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
    int n,k;
    cin>>n>>k;

    vector<pair<int,int>>v1(n);
    vector<int>v2(n),ans(n);

    f(i,0,n){
        cin>>v1[i].first;
        v1[i].second=i;
    }
    f(i,0,n)cin>>v2[i];

    sort(all(v1));
    sort(all(v2));

    f(i,0,n){
        ans[v1[i].second]=v2[i];
    }
    for(auto x:ans){
        prints(x);
    }

    cout<<endl;

   
}

int main() {
    fastio;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}