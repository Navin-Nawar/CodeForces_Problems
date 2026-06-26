#include <iostream>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,y,r,ans;cin>>n>>y>>r;
    if(y%2==0)
    ans = y/2 + r;
    else ans=(y-1)/2 +r;
    if(ans>=n)cout<<n<<endl;else cout<<ans<<endl;
    
}

int main() {
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}