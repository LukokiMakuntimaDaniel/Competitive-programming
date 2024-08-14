#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

ll calcule(ll a, ll b, ll c){
    return (  abs(a - b ) + abs(a - c ) + abs(b - c ));
}

void solve(){
   ll n;
   ll a,b,c;
   cin>>a>>b>>c;

   ll ans = INT_MAX;

   for(ll ka = -1; ka <= 1; ka++){
     for(ll kb = -1; kb <= 1; kb++){
        for(ll kc = -1; kc <= 1; kc++){
            ll na = a + ka;
            ll nb = b + kb;
            ll nc = c + kc;

            ans = min( ans , calcule( na,nb,nc ));
        }
      }
   }

   cout<< ans <<endl;

    //0 = p - + ' ^
    //for(ll i=0; i<n; i++){}
}

int main(){
    ll t,n;
    cin >>t;
    while(t--){
        solve();
    }

    return 0;
}
