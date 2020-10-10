#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int a[n];
	for (long long int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	long long int max_so_far=0,max_ending=0;
	max_so_far=a[0];
	for (long long int i=0;i<n;i++)
	{
		max_ending+=a[i];
		if(max_so_far<max_ending)
		{
			max_so_far=max_ending;
		}
		if(max_ending<0)
		{
			max_ending=0;
		}
	}
	cout<<max_so_far;
}
