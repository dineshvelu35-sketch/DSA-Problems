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
	unordered_set<int>as(A.begin(),A.end());
	for(auto x:B)
	{
		as.insert(x);
	}
	for(auto x:as)
	{
		cout<<x<<" ";
	}
}