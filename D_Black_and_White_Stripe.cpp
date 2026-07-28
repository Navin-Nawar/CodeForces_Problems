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
    int n,m;cin>>n>>m;
    string s;cin>>s;
    int pref[n]={0};
    if(s[0]=='W')
    pref[0]=1;
    else pref[0]=0;
    
    for(int i=1;i<n;i++){
        int cnt=0;
        if(s[i]=='W')cnt++;
        pref[i]=pref[i-1]+cnt;

    }

    int mn=INT_MAX;
    int lenman=0;

    for(int i=m-1;i<n;i++){
        if(i==m-1)lenman=pref[i];
        else
        lenman=pref[i]-pref[i-m];
        mn=min(mn,lenman);
    }
   
    cout<<mn<<endl;
    
}

int main() {
    fastio;
    int t;
    cin >> t;
    while(t--)
     solve();
    return 0;
}