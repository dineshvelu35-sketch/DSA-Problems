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
	int K;
	cin>>K;
	unordered_map<int,int>mp;
	int prefixSum=0,Res=0;
	for(int i=0;i<A.size();i++)
	{
		prefixSum+=A[i];
		if(prefixSum==K)
		{
			Res=i+1;
		}
		else if(mp.find(prefixSum-K)!=mp.end())
		{
			Res=max(Res,i-mp[prefixSum]);
		}
		if(mp.find(prefixSum)==mp.end())
		{
			mp[prefixSum]=i;
		}
	}
	cout<<Res;
};