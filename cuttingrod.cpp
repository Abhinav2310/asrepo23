#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"ENTER THE NUMBER OF ROD LENGTHS\n";
	cin>>n;
	int a[n],cost[n];
	cout<<"ENTER LENGTH ALONG WITH COST\n";
	for (int i=0;i<n;i++)
	{
		cin>>a[i]>>cost[i];
	}
	int s;
	cout<<"ENTER ROD LENGTH\n";
	cin>>s;
	int T[n][s+1];
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<=s;j++)
		{
			if(j==0)
			{
				T[i][j]=0;
			}
			else if(j>=a[i])
			{
				T[i][j]=max(T[i-1][j],T[i][j-a[i]]+cost[i]);
			}
			else
			{
				T[i][j]=T[i-1][j];
			}
		}
	}
	cout<<T[n-1][s];
}
