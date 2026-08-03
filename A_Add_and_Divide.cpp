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
    int a,b;cin>>a>>b;

    int cnt=0,cntb=b;

    if(a<b){
        cout<<"1"<<endl;return;
    }
    else if(a==b){
        cout<<"2"<<endl;return;
    }

    else{
        int prevb=b;
        int mn=INT_MAX;
        for(int i=0;i<=30;i++){
            int cnt=0;
            int temp=a;
            while(temp!=0){
                if(b==1){
                    b++;

                }
                temp/=b;
                cnt++;
            }
            cnt=cnt+(b-prevb);
            mn=min(cnt,mn);
            b++;
        }
          cout<<mn<<endl;
    }

  

}

int main() {
    fastio;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}