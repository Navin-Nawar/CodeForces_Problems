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
    string x;
    cin>>x;
    int n;
    n=x.size();
    if(x.size()<=2)print("101");
    else{
        string ans="1"+string(n-1,'0')+"1";
        print(ans);
    }

}

int main() {
    fastio;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}