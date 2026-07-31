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

const int x=2e5+7;
int s[x];
 


int precompute(int p){
    int s=0;
    while(p){
        s+=p%10;
        p=p/10;
    }

    return s;

}



int main() {
    fastio;
   
    s[0]={0};
    for(int i=0;i<x;i++){
        s[i+1]=s[i]+precompute(i);
    }
    int t;
    cin >> t;
    while(t--){
        int n;cin>>n;
        print(s[n+1]);
    } 
    return 0;
}