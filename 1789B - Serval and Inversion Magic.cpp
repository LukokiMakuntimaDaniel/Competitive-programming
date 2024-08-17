#include <bits/stdc++.h>

using namespace std;

void solve(string s, int n){
    int marE = 0 , marD = n-1 , ultimaTrocaLeft = 0 , ultimaTrocaRigth = n-1;
    bool isPal = true;
    int vez = 0;
    for(int i = 0,j = n-1;i < j; i++,j--){
        if(s[i] == s[j])continue;
        if( s[i]!= s[j] ){
            vez++;
            if(vez == 1){
                marE = i;
                marD = j;
                ultimaTrocaLeft = i;
            }else if( i-1 == ultimaTrocaLeft){
                ultimaTrocaLeft++;
                continue;
            }else{
                isPal = false;
                break;
            }
        }
    }
    if(isPal == false){

        isPal = true;
        int vez = 0;
        for(int i = marE,j = marD; i < j; i++,j--){
            if(s[i] == s[j])continue;
            if(s[i] != s[j]){
                vez++;
                if(vez == 1){
                    ultimaTrocaRigth = j;
                    continue;
                }else if(j+1 == ultimaTrocaRigth){
                    ultimaTrocaRigth--;
                    continue;
                }else{
                    isPal = false;
                    break;
                }
            }
        }

    }
    if(isPal){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }

}

int main() {

    int t = 1;
    cin>>t;
    while( t-- ){
        int n;
        string s;
        cin>>n;
        cin>>s;
        solve( s,n);

    }

    return 0;
}

