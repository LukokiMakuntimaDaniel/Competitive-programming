/******************************************************************************
https://codeforces.com/problemset/problem/1985/B
*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int MaximumMultipleSum(int n){
    int s;
    int x;
    for(int c =2; c<=n; c++){
        int m=0;
        int k=1;
        while(c*k<=n){
            m+=c*k;
            k++;
        }
        if(m>s){
            s=m; 
            x=c;
        } 
    }
    return x;
}

int main()
{
    
    int t,n;
    cin>>t;
    
    while(t--){
         cin>>n;
         cout<<MaximumMultipleSum(n)<<endl;
    }
    return 0;
}