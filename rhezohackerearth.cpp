#include<bits/stdc++.h>
using namespace std;
bool prime(int n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n;
	cin>>n;
	int p;
	for (int i=n;i>0;i--)
	{
		if(prime(i))
		{
			p=i;
			break;
		}
	}
	int a[n],sum=0;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	int d=n-p;
	int max=0,s=sum;
	for (int i=0;i<d;i++)
	{
		s=s-a[n-i-1];
	}
	max=s;
	for(int i=0;i<d;i++)
	{
		s=s+a[i+p]-a[i];
		max=max>s?max:s;
	}
	cout<<max;
}
