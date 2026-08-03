#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> A;
	string S;
	int x;
	getline(cin,S);
	stringstream ss(S);
	while(ss>>x)
	{
		A.push_back(x);
	}
	int Sum;
	cin>>Sum;
	unordered_map<int,int>mp;
	int prefixSum=0;
	for(int i=0;i<A.size();i++)
	{
		prefixSum+=A[i];
		if(prefixSum==Sum)
		{
			cout<<"Sum found between indexes "<<0<<" and "<<i;
			return 0;
		}
		else if(mp.find(prefixSum-Sum)!=mp.end())
		{
			cout<<"Sum found between indexes "<<mp[prefixSum-Sum]+1<<" and "<<i;
			return 0;
		}
		mp[prefixSum]=i;
	}
	return 0;
}