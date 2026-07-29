#include <iostream>
#include<algorithm>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio;
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int sum=a+b+c;
        if(sum==0)cout<<0<<endl;
        else if(sum%2!=0)cout<<-1<<endl;
        else if(a==0)cout<<min(b,c)<<endl;
        else if(b==0)cout<<min(a,c)<<endl;
        else if(c==0)cout<<min(b,a)<<endl;
        else if(a==b&&b==c || a!=b && b!=c)cout<<sum/2<<endl;
        else if(a==b||a==c)cout<<2*a<<endl;
        else if(b==c)cout<<2*b<<endl;
       
        else cout<<-1<<endl;

        
    }
}