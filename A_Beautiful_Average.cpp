#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main(){
    fastio
    int t;cin>>t;while(t--){
        int a;cin>>a;
        vector<int>v;
        for(int i=0;i<a;i++){
            int n;
            cin>>n;
            v.push_back(n);
        }
        sort(v.begin(),v.end());
        cout<<v.back()<<endl;
    }
    return 0;
}