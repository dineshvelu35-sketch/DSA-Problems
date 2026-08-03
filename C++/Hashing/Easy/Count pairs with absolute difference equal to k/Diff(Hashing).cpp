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
	int Cnt=0;
	for(int i=0;i<A.size();i++)
	{
		int Cmp=K+A[i];
		if(mp.find(Cmp)!=mp.end())
		{
			Cnt+=mp[Cmp];
		}
		Cmp=A[i]-K;
		if(mp.find(Cmp)!=mp.end())
		{
			Cnt+=mp[Cmp];
		}
		mp[A[i]]++;
	}
	cout<<Cnt;
}