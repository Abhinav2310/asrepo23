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
		long long int n;
		cin>>n;
		cout<<2<<'\n';
		long long int ans=n,lo=n-1;
		for(long long int i=1;i<n;i++)
		{
			cout<<ans<<" "<<lo<<'\n';
			ans=(ans+lo+1)/2;
			lo--;
		}
	}
}
