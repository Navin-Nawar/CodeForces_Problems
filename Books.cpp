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
    ll n,t;cin>>n>>t;
    vector<long long>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int l=0,r=0,cnt=0,ans=0,mxans=0;
    while(r<n){
        cnt+=a[r];
        if(cnt>t){
            cnt-=a[l];
            l++;
            r++;
        }
        else{
            mxans=max(r-l+1,mxans);
            r++;
        }
       
    }

    cout<<mxans<<endl;

}

int main() {
    solve();
    return 0;
}