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
    vector<int> v;
    
    while(n>0){
        if(n%2==0){

            int a=n,b=n-1;
            v.pb(a);
            v.pb(b);
            v.pb(a);
            v.pb(a);
            v.pb(b);
            v.pb(b);
            v.pb(a);
            v.pb(b);
            n-=2;
        }

        else if(n%2!=0){

            int a=n,b=n-1,c=n-2;
            v.pb(c);
            v.pb(c);
            v.pb(a);
            v.pb(a);
            v.pb(b);
            v.pb(b);
            v.pb(a);
            v.pb(b);
            v.pb(a);
            v.pb(c);
            v.pb(b);
            v.pb(c);

            n-=3;
        }
    }

    for(auto x:v) prints(x);
    print("");
}

int main() {
    fastio;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}