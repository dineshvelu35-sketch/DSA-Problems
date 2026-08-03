#include<bits/stdc++.h>
using namespace std;
int main()
{
	int K;
	cin>>K;
	cin.ignore();
	vector<int>A;
	string S;
	getline(cin,S);
	stringstream ss(S);
	int x;
	while(ss>>x)
	{
		A.push_back(x);
	}
	unordered_map<int,int>mp;
	for(int i=0;i<A.size();i++)
	{
		if(mp.find(A[i])!=mp.end() && i-mp[A[i]]<=K)
		{
			cout<<"YES";
			return 0;
		}
		mp[A[i]]=i;
	}
	cout<<"NO";
	return 0;
}