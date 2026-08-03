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
	int T;
	cin>>T;
	int Cnt=0;
	unordered_map<int,int>mp;
	for(int i=0;i<A.size();i++)
	{
		int Cmp=T-A[i];
		if(mp.find(Cmp)!=mp.end())
		{
			Cnt+=mp[Cmp];
		}
		mp[A[i]]++;
		cout<<"{"<<A[i]<<","<<mp[A[i]]<<"} "<<Cnt<<endl;
	}
	cout<<Cnt;
}