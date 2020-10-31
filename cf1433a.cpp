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
		long long int val;
		if(n/1000)
		{
			val=n/1000;
		}
		else if(n/100)
		{
			val=n/100;
		}
		else if(n/10)
		{
			val=n/10;	
		}
		else
		{
			val=n;
		}
		long long int sum=0;
		for(long long int i=1;i<=9;i++)
		{
			if(i<val)
			{
				sum+=10;
			}
			else
			{
				break;
			}
		}
		long long int c=1,x=val;
		while(val<=n)
		{
			sum+=c;
			val=val*10+x;
			c++;
		}
		cout<<sum<<'\n';
	}
	
}
