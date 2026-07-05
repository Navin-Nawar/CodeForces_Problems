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
    if(c%3!=0)no;
    else{
        b=b-(c/3);
        if(b<0||b%2!=0)no;
        else{
            a=a-(b/2);
            if(a!=0)no;
            else yes;
        }
    }
}

int main() {
    fastio;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}