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
    string a,b;cin>>a>>b;
    int cnt,mx=0;

    for(int i=0;i<a.size();i++){
        string s="";
        for(int j=i;j<a.size();j++){
            s+=a[j];
        if(b.find(s)!=string::npos){
            cnt=s.size();
            mx=max(mx,cnt);
        }

        else{
           
            break;
        }
    }
    }

    cout<<a.size()+b.size()-(2*mx)<<endl;
}

int main() {
    fastio;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}