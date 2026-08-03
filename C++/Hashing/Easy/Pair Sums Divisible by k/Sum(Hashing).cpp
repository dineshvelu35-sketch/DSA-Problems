#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> A;
	int x;
	string S;
	getline(cin,S);
	stringstream ss(S);
	while(ss>>x)
	{
		A.push_back(x);
	}
	int k;
	cin>>k;
	if(A.size()%2!=0)
	{
		cout<<"False";
		return 0;
	}
	unordered_map<int,int>mp;
	for(auto x:A)
	{
		mp[((x%k)+k)%k]++;
	}
	for(auto x:A)
	{
		int rem=((x%k)+k)%k;
		if(rem*2==k)
		{
			if(mp[rem]%2!=0)
			{
				cout<<"False";
				return 0;
			}
		}
		else if(rem==0)
		{
			if(mp[rem]%2!=0)
			{
				cout<<"False";
				return 0;
			}
		}
		else if(mp[rem]!=mp[k-rem])
		{
			cout<<"False";
			return 0;
		}
	}
	cout<<"True";
	return 0;
}