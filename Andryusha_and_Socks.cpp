#include <iostream>
#include <map>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;cin>>n;
    map<int,int>mp;
    int cnt=0,ans=0;
    for(int i=0;i<n*2;i++){
        int x;cin>>x;
        mp[x]++;
        if(mp[x]==2){
            cnt=cnt-1;
        }
        else {
            cnt++;
            ans=max(ans,cnt);
        }
    }

    cout<<ans<<endl;
}

int main() {
    fastio;

     solve();

    return 0;
}