/* longest common prefix implementation, suffix array needed before hand */
/* suffix array is O(n*log(n)*log(n)) complexity and lcp is O(n*log(n)) */
#include<bits/stdc++.h>
using namespace std;

vector <int> SA(const string &s) {
    int n = s.size();
    vector <int> sa(n);
    for(int i = 0; i < n; i++) {
        sa[i] = i;
    }
    sort(sa.begin(), sa.end(), [s](const int &a, const int &b) {
        int n = s.size();
        int lo = 0, hi = min(n-a, n-b)-1, indx = -1;
        while(lo <= hi) {
            int mid = lo + (hi - lo)/2;
            if(s[a+mid] == s[b+mid]) {
                indx = mid;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        if(a+indx+1 == s.size()) {
            return true;
        } else if(b+indx+1 == s.size()) {
            return false;
        } else {
            return s[a+indx+1] < s[b+indx+1];
        }
    });
    return sa;
}

vector <int> LCP(const string &s, const vector <int> &sa) {
    int n = s.size();
    vector <int> lcp(n);
    lcp[0] = 0;
    for(int i = 0; i < n; i++) {
        int now = sa[i];
        int prev = sa[i-1];
        if(s[now] == s[prev]) {
            int lo = 0, hi = (n-sa[i-1]) - 1;
            while(lo <= hi) {
                int mid = lo + (hi - lo)/2;
                if(s[now+mid] == s[prev+mid]) {
                    lcp[i] = mid+1; // number of elements from [now, now+mid]
                    lo = mid + 1;
                } else {
                    hi = mid - 1;
                }
            }
        } else {
            lcp[i] = 0;
        }
    }
    return lcp;
}

int main() {
    string s;
    cin>>s;
    auto sa = SA(s);
    auto lcp = LCP(s, sa);
    for(auto l : lcp) {
        cout<<l<<" ";
    }
    cout<<"\n";
    return 0;
}