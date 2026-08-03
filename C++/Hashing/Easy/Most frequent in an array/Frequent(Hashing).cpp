#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> A;
	string S;
	getline(cin,S);
	stringstream ss(S);
	int x;
	while(ss>>x)
	{
		A.push_back(x);
	}
	unordered_map<int,int>mp;
	for(auto x:A)
	{
		mp[x]++;
	}
	int Max=INT_MIN,MaxCnt=INT_MIN;
	for(int i=0;i<A.size();i++)
	{
		if(MaxCnt<mp[A[i]] || (MaxCnt==mp[A[i]] && Max<A[i]))
		{
			MaxCnt=mp[A[i]];
			Max=A[i];
		}
	}
	cout<<Max;
}