#include <iostream>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main(){
    fastio
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int ans=0;
        for(int i=0;i<=2;i++){
            if((a+i)%3==0){
                ans= i;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;

    
}
