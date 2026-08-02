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
    int n,m;cin>>n>>m;
    vector<int>nvec(n),mvec(m);
    f(i,0,n)cin>>nvec[i];
    f(i,0,m)cin>>mvec[i];

    if(2*m>n){
        no;
        return;
    }

    sort(all(nvec));
    sort(all(mvec));
    bool f=false;
    int mid=(n+1)/2;
    int cnt=0;

    for(int i=0;i<m;i++){
        if(mvec[i]>=nvec[i]&&mvec[i]<=nvec[n-m+i]){
            mid++;cnt++;
        }
    }
    if(cnt!=m)no;
    else yes;

}

int main() {
    fastio;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}