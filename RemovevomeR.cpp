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
    int n;cin>>n;string s;cin>>s;int cnt=0;
    for(int i=0;i<n-1;i++){
        if(s[i]!=s[i+1])cnt++;
    }

    if(cnt==0)print("1");
    else if(cnt==1)print("2");
    else print("1");
}

int main() {
    fastio;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}