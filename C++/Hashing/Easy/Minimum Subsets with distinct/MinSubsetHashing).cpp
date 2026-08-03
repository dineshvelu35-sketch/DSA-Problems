#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> A;
	string S;
	getline(cin,S);
	stringstream ss(S);
	int x;
	while(ss>>x)
	{
		A.push_back(x);
	}
	int MaxCnt=0;
	unordered_map<int,int>mp;
	for(auto x:A)
	{
		mp[x]++;
	}
	for(int i=0;i<A.size();i++)
	{
		if(mp[A[i]]>MaxCnt)
		{
			MaxCnt=mp[A[i]];
		}
	}
	cout<<MaxCnt;
}