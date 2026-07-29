#include <iostream>
#include <vector>
#include <set>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;cin>>n;
    vector<int>v(n);
    vector<int>v1;
    set<int>st;
    for(int i=0;i<n;i++)cin>>v[i];
    int m;cin>>m;
    for(int i=0;i<m;i++){
        int x;cin>>x;
        st.insert(x);
    }
    for(int i=0;i<n;i++){
        if(st.find(v[i])==st.end()){
            v1.push_back(v[i]);
        }
    }
    cout<<v1.size()<<endl;
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
}

int main() {
    fastio;

    solve();

    return 0;
}