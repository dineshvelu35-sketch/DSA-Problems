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
	int L,H;
	cin>>L>>H;
	unordered_set<int>mp(A.begin(),A.end());
	for(int i=L;i<=H;i++)
	{
		if(mp.find(i)==mp.end())
		{
			cout<<i<<" ";
		}
	}
}