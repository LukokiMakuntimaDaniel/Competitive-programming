#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

void solve(){
    ll n;
    cin>>n;

    vector<ll>ans;

    ll p = 1;
    while(n){
        if(n%10)
            ans.push_back(n%10*p);
        n /= 10;
        p *= 10;
    }

    cout<<ans.size()<<endl;
    for(ll cur : ans)
        cout<< cur <<" ";
    cout<<endl;
}

int main(){
    ll t,n;
    cin >>t;

    while(t--){
        solve();
     }

    return 0;
}





//0 = p - + ' ^
//for(ll i=0; i<n; i++){}
