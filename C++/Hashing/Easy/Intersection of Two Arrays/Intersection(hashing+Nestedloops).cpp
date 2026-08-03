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
	unordered_map<int,int>seen;
	for(int i=0;i<A.size();i++)
	{
		for(int j=0;j<B.size();j++)
		{
			if(A[i]==B[j] && seen.count(A[i])==0)
			{
				seen[A[i]]=1;
				Res.push_back(A[i]);
			}
		}
	}
	for(int i=0;i<Res.size();i++)
	{
		cout<<Res[i]<<" ";
	}
}