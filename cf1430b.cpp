#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,k;
		cin>>n>>k;
		vector<long long int> a(n);
		for(long long int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a.begin(),a.end(),greater<long long int>());
		for(long long int i=1;i<=k && i<n;i++)
		{
			a[0]+=a[i];
		}
		cout<<a[0]<<'\n';
	}
}
