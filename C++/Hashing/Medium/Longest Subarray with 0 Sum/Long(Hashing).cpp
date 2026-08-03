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
	unordered_map<int,int>mp;
	mp[0]=-1;
	int prefixSum=0,MaxLen=0;
	for(int i=0;i<A.size();i++)
	{
		prefixSum+=A[i];
		if(mp.find(prefixSum)!=mp.end())
		{
			MaxLen=max(MaxLen,i-mp[prefixSum]);
		}
		else
		{
			mp[prefixSum]=i;
		}
	}
	cout<<MaxLen;
}