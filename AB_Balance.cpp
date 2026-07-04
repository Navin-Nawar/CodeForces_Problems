#include <iostream>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    string s;cin>>s;
    if(s[0]==s[s.size()-1]){
        cout<<s<<endl;
        
    }
    else{
    s[0]=s[s.size()-1];
    cout<<s<<endl;
    } 
   
   
    
}

int main() {
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}