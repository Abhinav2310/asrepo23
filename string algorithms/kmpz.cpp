#include<bits/stdc++.h>
using namespace std;

vector <int> LPS(const string &p) {
    vector <int> lps(p.size());
    int i = 1, j = 0;
    lps[0] = 0;
    while(i < p.size()) {
        if(p[i] == p[j]) {
            lps[i] = j + 1;
            i++; j++;
        } else {
            if(j != 0) j = lps[j - 1];
            else {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}

vector <int> findPattern(const string &t, const string &p, vector <int> lps) {
    vector <int> occ;
    string txt = " " + t; //to make t 1-indexed
    string pat = " " + p; //to make p 1-indexed
    lps.insert(lps.begin(), 0);
    int i = 1, j = 0;
    while(i < txt.size()) {
        if(txt[i] == pat[j+1]) {
            i++;
            j++;
        }
        if(j == p.size()) {
            // cout<<"match\n";
            occ.push_back(i-j-1); //txt and pat are 1-indexed and we need 0-indexed answer
            j = lps[j];
        }
        else if(i < txt.size() && txt[i] != pat[j+1]) {
            if(j != 0) j = lps[j];
            else i++;
        }
    }
    return occ;
}

int main() {
    string t;
    string p;
    cin>>t>>p;
    vector <int> lps = LPS(p);
    cout<<"lps: ";
    for(auto l : lps) cout<<l<<" ";
    cout<<"\n";
    auto ans = findPattern(t, p, lps);
    if(ans.empty()) cout<<"-1\n";
    else for(auto a : ans) cout<<a<<" ";
    cout<<"\n";
    return 0;
}