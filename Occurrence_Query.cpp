#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct Event {
    ll x;
    int type; // +1 = start, -1 = end
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    vector<pair<ll,int>> events; // (position, +1/-1)
    for(int i=0;i<N;i++){
        ll A,B;
        cin >> A >> B;
        events.push_back({A, 1});
        events.push_back({B+1, -1});
    }

    int Q;
    cin >> Q;
    vector<pair<ll,int>> queries(Q); // (C,index)
    for(int i=0;i<Q;i++){
        ll C;
        cin >> C;
        queries[i] = {C,i};
    }

    vector<ll> ans(Q);
    
    // Sort events and queries together
    sort(events.begin(), events.end());
    sort(queries.begin(), queries.end());

    ll cur = 0;
    int e = 0;
    for(auto q: queries){
        ll C = q.first;
        int idx = q.second;
        // process all events <= C
        while(e < events.size() && events[e].first <= C){
            cur += events[e].second;
            e++;
        }
        ans[idx] = cur;
    }

    for(int i=0;i<Q;i++) cout << ans[i] << "\n";
}