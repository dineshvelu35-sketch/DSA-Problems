#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>A;
	string S;
	int x;
	getline(cin,S);
	stringstream ss(S);
	while(ss>>x)
	{
		A.push_back(x);
	}
	unordered_map<int,int>mp;
	for(int i=0;i<A.size();i++)
	{
		if(mp.find(A[i])!=mp.end())
		{
			cout<<A[i];
			return 0;
		}
		mp[A[i]]++;
	}
}