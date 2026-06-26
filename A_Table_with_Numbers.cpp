#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,r,c;
    cin>>n>>r>>c;
    vector<int>v;
    int maxi=min(r,c);
    

    for(int i=0;i<n;i++){
      int a;  cin>>a;
      if(a<=r||a<=c)v.push_back(a);
    }

    sort(v.begin(),v.end());

    int l=0,ri=v.size()-1,ans=0;

    while(l<ri){
        if(v[l]<=maxi){
            ans++;
            ri--;
        }
        l++;
    }
    cout<<ans<<endl;


   


}

int main() {
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}