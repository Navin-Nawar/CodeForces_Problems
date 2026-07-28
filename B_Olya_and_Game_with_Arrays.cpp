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

 bool cmp(pair<int,int>a,pair<int,int>b){
        return a.second<b.second;
    }


void solve() {
    int n;cin>>n;
    vector<pair<int,int>>vp;
    int mn=INT_MAX;
    while(n--){
        int p;cin>>p;

        vector<int>v(p);
        f(i,0,p)cin>>v[i];
        sort(all(v));
        vp.push_back({v[0],v[1]});
        mn=min(mn,v[0]);

    }

    sort(vp.rbegin(),vp.rend(),cmp);
    ll ans=0;
    for(int i=0;i<vp.size()-1;i++){
        ans+=vp[i].second;
    }
   cout<<ans+mn<<endl;
   
}

int main() {
    fastio;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}