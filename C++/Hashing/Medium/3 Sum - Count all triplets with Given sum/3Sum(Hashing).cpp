#include<bits/stdc++.h>
using namespace std;
int CntPairs(vector<int> &A,int idx,int K)
{
	unordered_map<int,int>mp;
	int Cnt=0;
	for(int i=idx;i<A.size();i++)
	{
		int Cmp=K-A[i];
		if(mp.find(Cmp)!=mp.end())
		{
			Cnt+=mp[Cmp];
		}
		mp[A[i]]++;
	}
	return Cnt;
}
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
	int Cnt=0;
	for(int i=0;i<A.size()-2;i++)
	{
		int Rem=K-A[i];
		Cnt+=CntPairs(A,i+1,Rem);
	}
	cout<<Cnt;
}