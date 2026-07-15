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
    vector<int>v(n);
    f(i,0,n)cin>>v[i];

        int currsum=v[0],mxsum=v[0];
    f(i,1,n){
      if ((abs(v[i]) % 2) == (abs(v[i-1]) % 2)){
        currsum=v[i];
      }
        else{
        currsum=max(v[i],currsum+v[i]);
       
        }

         mxsum=max(currsum,mxsum);
    }

    print(mxsum);
 
}

int main() {
    fastio;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}