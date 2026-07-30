#include <iostream>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int k,x;
    cin>>k>>x;
    int ans=k*x;
    cout<<ans+1<<endl;
}

int main() {
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}