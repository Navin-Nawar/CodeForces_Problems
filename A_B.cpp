#include <iostream>
#include <set>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,m;
    while(cin>>n>>m){
       
        set<int>sf;

        for(int i=0;i<n;i++){
            int x;cin>>x;sf.insert(x);
        }
         for(int i=0;i<m;i++){
            int x;cin>>x;sf.insert(x);
        }
        for(auto it:sf){
            cout<<it<<" ";
        }
        cout<<endl;

    }
}

int main() {
    fastio;

    solve();

    return 0;
}