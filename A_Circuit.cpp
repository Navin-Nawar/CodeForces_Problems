#include <iostream>
#include<vector>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    ll c0=0,c1=0,n;cin>>n;
    vector<ll>v;
    for(ll i=0;i<2*n;i++)
{
    int a;cin>>a;v.push_back(a);
    if(a==0)c0++;
    else c1++;
}
ll mx=0,mn=0;
if(c1==c0){
    mx=c1;
    if(c1%2!=0 && c0%2!=0)
    mn=1;
    else mn=0;
    
}
else if(c1>c0){
    if(c1%2!=0 && c0%2!=0){
        mx=c0;
        mn=1;
    }
    else {mx=c0;
    mn=0;
    }
}
else{
     if(c1%2!=0 && c0%2!=0){
        mx=c1;
        mn=1;
    }
    else {mx=c1;
    mn=0;
    }

}
cout<<mn<<" "<<mx<<endl;

}

int main() {
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}