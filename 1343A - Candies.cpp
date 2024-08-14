#include<bits/stdc++.h>

typedef long long ll;

using namespace std;
void solve()
{

   ll n;
   cin>>n;
   for(ll  pow = 2; pow < n; pow++){
        ll target = ( 1 << pow ) - 1;
        if(n%target == 0){
            ll x = n/target;
            cout<<(  x  )<<endl;
            break;
        }
   }
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