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
    string p;
    p=s;
    sort(all(p));
    if(p==s){cout<<"NO"<<endl;
        return;
    }
    else{
        cout<<"YES"<<endl;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]>s[i+1]){
                cout<<i+1<<" "<<i+2<<endl;
                break;
            }
        }
    }

}

int main() {
    fastio;
   solve();
    return 0;
}