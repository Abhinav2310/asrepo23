#include<bits/stdc++.h>
using namespace std;
int coinchange(int n,int coins[],int tot)
{
	if(tot==0)
		return 1;
	if(tot<0)
		return 0;
	if(n<=0 && tot>=1)
		return 0;
	return coinchange(n-1,coins,tot)+coinchange(n,coins,tot-coins[n-1]);
}
int main()
{
	int coins[5]={1,5,10,20,100};
	int tot;
	cin>>tot;
	cout<<coinchange(5,coins,tot);
}
