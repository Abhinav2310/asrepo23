#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll tran,n;
	cout<<"ENTER NUMBER OF TRANSACTION AND DAYS\n";
	cin>>tran>>n;
	ll a[n];
	cout<<"ENTER EACH DAY PRICE\n";
	for (ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	vector< vector <ll> > T(tran+1,vector<ll> (n+1,0));
	
	for (ll i=1;i<=tran;i++)
	{
		ll maxdif=-a[0];
		for (ll j=1;j<=n;j++)
		{
			T[i][j]=max(T[i][j-1],a[j-1]+maxdif);
			maxdif=max(maxdif,T[i-1][j]-a[j-1]);
		}
	}
	cout<<T[tran][n];
}
