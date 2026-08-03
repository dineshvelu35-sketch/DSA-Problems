#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> A;
	int x;
	while(cin>>x && x!=-1)
	{
		A.push_back(x);
	}
	int Res=0;
	unordered_map<int,int>mp;
	for(int i=0;i<A.size();i++)
	{
		if(mp.find(A[i])==mp.end())
		{
			mp[A[i]]=i;
		}
		else
		{
			Res=max(Res,i-mp[A[i]]);
		}
	}
	cout<<Res;
}