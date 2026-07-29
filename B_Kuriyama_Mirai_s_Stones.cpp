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
    long long n;cin>>n;vector<ll>v(n);f(i,0,n)cin>>v[i];
    vector<ll>prefbeforesrt(n+1,0),prefaftersrt(n+1,0);

    f(i,0,n){
        prefbeforesrt[i+1]+=prefbeforesrt[i]+v[i];
    }
    sort(all(v));
     f(i,0,n){
        prefaftersrt[i+1]+=prefaftersrt[i]+v[i];
    }


    ll t;cin>>t;
    while(t--){
        ll q,l,r;cin>>q>>l>>r;
        if(q==1){
            cout<<prefbeforesrt[r]-prefbeforesrt[l-1]<<endl;
        }
        else if(q==2){
            cout<<prefaftersrt[r]-prefaftersrt[l-1]<<endl;
        }

    }
}

int main() {
    fastio;
    solve();
    return 0;
}