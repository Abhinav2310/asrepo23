#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector < vector <ll> > fibo(vector < vector <ll> > M, int n) {
    ll MOD = 1000000007;
    if(n == 0) {
        return {
            {1, 0},
            {0, 1}
        };
    };
    // M * M calculation 
    vector <vector <ll> > M2(M);
    ll i, j, k;
    for (i = 0; i < 2; i++)
    { 
        for (j = 0; j < 2; j++) 
        { 
            M2[i][j] = 0; 
            for (k = 0; k < 2; k++) 
                M2[i][j] = (M2[i][j] % MOD + ((M[i][k] % MOD) * (M[k][j] % MOD)) % MOD) % MOD; 
        }
    }
    
    auto res = fibo(M2, n/2);
    if(n & 1) {
        //matrix multiplication
        vector <vector <ll> > M2M(2, vector <ll> (2));
        ll i, j, k;
        for (i = 0; i < 2; i++)
        { 
            for (j = 0; j < 2; j++) 
            { 
                M2M[i][j] = 0; 
                for (k = 0; k < 2; k++) 
                    M2M[i][j] = (M2M[i][j] % MOD + ((M[i][k] % MOD) * (res[k][j] % MOD)) % MOD) % MOD; 
            }
        }
        return M2M;
    } else {
        return res;
    }
}

ll solve(ll A) {
    if(A < 2) {
        return A;
    }
    vector <vector <ll> > M = {
        {1, 1},
        {1, 0}
    };
    auto res = fibo(M, A-1);
    return res[0][0];
}

int main() {
    ll t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        cout<<solve(n)<<"\n";
    }
    return 0;
}