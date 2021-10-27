/* naive approach for pattern matching */

#include<bits/stdc++.h>
using namespace std;

vector <int> findPattern(const string &t, const string &p) {
    vector <int> occ;
    int n = t.size();
    int m = p.size();
    int i = 0, j = 0;
    for(int i = 0; i < n-m+1; i++) {
        int flag = 1;
        int j, k;
        for(j = 0, k = i; j < m; j++, k++) {
            if(t[k] != p[j]) {
                flag = 0;
                break;
            }
        }
        if(flag == 1) {
            occ.push_back(k-j);
        }
    }
    return occ;
}
int main() {
    string t;
    string p;
    cin>>t>>p;
    vector <int> occ = findPattern(t, p);
    for(auto o : occ) 
        cout<<o<<"\n";
    cout<<"\n";
    return 0;
}