#include <iostream>
#include<vector>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    vector<int>v(4);
    for(int i=0;i<4;i++)cin>>v[i];

    for(int mask=0;mask<(1<<4);mask++){
       int sumA=0,sumB=0;
        for(int i=0;i<4;i++){
            sumA+=v[i];
            else sumB+=v[i];
        }
        if(sumA==sumB){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int main() {
    fastio;

    solve();

    return 0;
}