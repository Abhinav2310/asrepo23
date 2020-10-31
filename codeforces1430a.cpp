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
		bool flag=false;
		for(long long int i=0;i<=n/3;i++)
		{
			for(long long int j=0;j<=n/5;j++)
			{
				for(long long int k=0;k<=n/7;k++)
				{
					if(3*i+5*j+7*k==n)
					{
						flag=true;
						cout<<i<<" "<<j<<" "<<k<<'\n';
						break;
					}
					if(3*i+5*j+7*k>n)
					{
						break;
					}
				}
				if(flag)
				{
					break;
				}
			}
			if(flag)
			{
				break;
			}
		}
		if(!flag)
		{
			cout<<"-1\n";
		}
	}
}
