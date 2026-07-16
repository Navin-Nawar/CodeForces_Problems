#include <iostream>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio
        int t;
        cin>>t;
        while(t--){
            int n;
            int t,c0=0,c1=0;
            cin>>n;
            for(int i=0;i<n;i++){
                int a;
                cin>>a;
                if(a==0)c0++;
                if(a==-1)c1++;
            }
            if(c1%2==0)cout<<c0<<endl;
            else if(c1%2!=0)cout<<c0+2<<endl;
        }
    return 0;
}