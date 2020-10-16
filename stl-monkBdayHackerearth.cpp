#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector <string> v(n);
		for (int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		sort(v.begin(),v.end());
		set <string> s(v.begin(),v.end());
		set <string>::iterator it;
		for (it=s.begin();it!=s.end();it++)
		{
			cout<<*it<<"\n";
		}
	}
}
