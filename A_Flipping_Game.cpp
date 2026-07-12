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

    for(int i=0;i<n;i++)cin>>v[i];

    int mxcnt=0,cntk=0,cntp=0;
    int x,y;
    for(int i=0;i<n;i++){
        int cnt=0;
        int cntk=0;
        for(int k=0;k<i;k++){
            if(v[k]==1)cntk++;
        }

        for(int j=i;j<n;j++){
            if(v[j]==0)cnt++;

            for(int p=j+1;p<n;p++){
                if(v[p]==1)cntp++;
            }
        mxcnt=max(cnt+cntk+cntp,mxcnt);
        cntp=0;
        }
       
    
}

print(mxcnt);
}

int main() {
    fastio;
    solve();
    return 0;
}