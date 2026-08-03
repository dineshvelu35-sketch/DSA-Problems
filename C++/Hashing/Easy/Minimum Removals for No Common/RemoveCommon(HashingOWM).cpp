#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> A,B;
	string S;
	int x;
	getline(cin,S);
	stringstream ss1(S);
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
	multiset<int>st(A.begin(),A.end());
	int Cnt=0;
	for(int i=0;i<B.size();i++)
	{
		if(st.find(B[i])!=st.end())
		{
			Cnt++;
		}
	}
	cout<<Cnt;
	
}