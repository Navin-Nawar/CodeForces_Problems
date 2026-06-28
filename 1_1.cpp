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
    string s;cin>>s;
    
    int mn=0;
    int mx=0;
    int l=0,r=2;
    while(r<n){
       if(s[l]=='1'){
        if(s[r]=='1'){
            s[r-1]='1';
            
            
        }
        
       }
       l++;r++; 
    }
     f(i,0,n){
        if(s[i]=='1')mx++;
    }
    int p=0,q=2;
    while(q<n){
       if(s[p]=='1'){
        if(s[q]=='1'){
            s[q-1]='0';
            
            
        }
        
       }
       p++;q++; 
    }
   
     f(i,0,n){
        if(s[i]=='1')mn++;
    }
    cout<<mn<<" "<<mx<<endl;
}

int main() {
    fastio;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}