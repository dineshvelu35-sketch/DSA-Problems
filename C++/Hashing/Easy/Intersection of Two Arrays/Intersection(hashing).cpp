#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> A,B;
	string S;
	getline(cin,S);
	stringstream ss1(S);
	int x;
	while(ss1>>x)
	{
		A.push_back(x);
	}
	getline(cin,S);
	stringstream ss2(S);
	while(ss2>>x)
	{
		B.push_back(x);
	}
	vector<int>Res;
	unordered_set<int> St(A.begin(),A.end());
	unordered_set<int> as;
	for(int i=0;i<B.size();i++)	
	{
		if(St.find(B[i])!=St.end() && as.find(B[i])==as.end())
		{
			as.insert(B[i]);
			Res.push_back(B[i]);
		}
	}
	for(int i=0;i<Res.size();i++)
	{
		cout<<Res[i]<<" ";
	}
}