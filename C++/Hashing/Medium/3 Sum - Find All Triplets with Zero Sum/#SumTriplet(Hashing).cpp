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
	vector<vector<int>> Res;
	unordered_map<int,vector<int>>mp;
	for(int i=0;i<A.size();i++)
	{
		for(int j=i+1;j<A.size();j++)
		{
			int Cmp=-(A[i]+A[j]);
			if(mp.find(Cmp)!=mp.end())
			{
				for(auto k:mp[Cmp])
				{
					Res.push_back({k,i,j});
				}
			}
		}
		mp[A[i]].push_back(i);
	}
	for(int i=0;i<Res.size();i++)
	{
		cout<<Res[i][0]<<" "<<Res[i][1]<<" "<<Res[i][2]<<endl;
	}
}