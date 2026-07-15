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
    int n;cin>>n;
   string s;cin>>s;

   int cnt=0,mx=0;
   f(i,0,n){
    if(s[i]=='#'){
        cnt++;
        mx=max(mx,cnt);
    }
    else cnt=0;
   }
   cout<<(mx+1)/2<<endl;
}

int main() {
    fastio;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}