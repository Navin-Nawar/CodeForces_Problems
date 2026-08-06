#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int k,x;
        cin>>k>>x;
        int ans=0;
        for(int i=1;i<=k;i++){
            ans=x*2;
            x=x*2;
        }
        cout<<ans<<endl;
        

    }
    return 0;
}
