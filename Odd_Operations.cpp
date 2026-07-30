#include <iostream>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    ll n;cin>>n;
    ll k=n;
    if(n%2!=0){
        cout<<"0"<<endl;
        return;
    }
    else if(n<10&&n%2!=0){
    
        cout<<"0"<<endl;
        return;
    }
    else if(n<10&&n%2==0){
        cout<<"-1"<<endl;
        return;
    }
    
    ll odd=0,even=0;
    int mx=0;int c=n%10;
    while(n>0){
        ll d=n%10;
        if(d>c)mx++;
        if(d%2==0)even++;
        else odd++;
        n=n/10;
    }
    if(odd>0)cout<<"1"<<endl;
    else {
        if(k%10==0)cout<<"2"<<endl;
        else {
            if(mx>0)cout<<"2"<<endl;
            else cout<<"3"<<endl;
        }
    }

     
}

int main() {
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}