#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

void solve(){

    string a,b;
    cin>>a;
    cin>>b;
    ll na = a.size();
    ll nb = b.size();

    if(a[na-1] != b[nb-1]){
        cout<<na + nb<<endl;
    }else{
        --na;
        --nb;
        while( na >= 0 and nb >= 0 and a[na] == b[nb]){
            --na;
            --nb;
        }
        cout<< (++na) + (++nb)<<endl;
    }

    //0 = p - + ' ^
    //for(ll i=0; i<n; i++){}
}

int main(){
    ll t=1,n;
    //cin >>t;
    while(t--){
        solve();
    }

    return 0;
}
