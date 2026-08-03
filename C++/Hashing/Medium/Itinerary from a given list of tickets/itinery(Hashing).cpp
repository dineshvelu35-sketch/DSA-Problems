#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	vector<vector<string>> A;
	for(int i=0;i<N;i++)
	{
		vector<string> X;
		for(int j=0;j<2;j++)
		{
			string S;
			cin>>S;
			X.push_back(S);
		}
		A.push_back(X);
	}
	vector<vector<string>>Res;
	unordered_map<string,string>mp1;
	for(auto i:A)
	{
		mp1[i[0]]=i[1];
	}
	unordered_map<string,string>mp2;
	for(auto i:A)
	{
		mp2[i[1]]=i[0];
	}
	string Start;
	for(int i=0;i<N;i++)
	{
		if(mp2.count(A[i][0])==0)
		{
			Start=A[i][0];
			break;
		}
	}
	auto it=mp1.find(Start);
	while(it!=mp1.end())
	{
		Res.push_back({it->first,it->second});
		it=mp1.find(it->second);
	}
	for(int i=0;i<N;i++)
	{
		cout<<Res[i][0]<<"->"<<Res[i][1]<<endl;
	}
	return 0;
}