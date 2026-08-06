#include <iostream>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
   string s;
   cin>>s;
   
   for(int i=0;i<s.size();i++){
    int d=s[i]-'0';
    int nd=9-d;
    if(i==0 && nd==0)continue;
    if(nd<d)s[i]=nd+'0';
   }
   cout<<s<<endl;
}

int main() {
    fastio;

     solve();

    return 0;
}