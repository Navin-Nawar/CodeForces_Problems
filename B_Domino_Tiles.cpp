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

string s1="0110",s2="0011",s3="1100",s4="1001";

int solve(string first,string second){

    for(int i=0;i<first.size();i++){

        int j=i%4;
        if(first[i]=='?')continue;
        else if(first[i]!=second[j])return 0;

    }
    return 1;
}

int main() {
    fastio;
    int t;
    cin >> t;
    while(t--) {
        int n;cin>>n;
        string s;
        cin>>s;

        int ans=solve(s,s1)+solve(s,s2)+solve(s,s3)+solve(s,s4);
        cout<<ans<<endl;
    }
    return 0;
}