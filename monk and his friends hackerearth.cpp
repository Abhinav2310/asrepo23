#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int t;
	cin>>t;
	while(t--)
	{
		long int n,m;
		cin>>n>>m;
		vector<long int> v(n+m);
		long int x;
		for (long int i=0;i<n;i++)
		{
			cin>>x;
			v[i]=x;
		}
		for (long int i=n;i<n+m;i++)
		{
			long int c=0;
			cin>>x;
			for (long int j=0;j<i;j++)
			{
				if(v[j]==x)
				{
					cout<<"YES\n";
					c++;
					break;
				}
			}
			v[i]=x;
			if(c==0)
			{
				cout<<"NO\n";
			}
		}
	}
}
