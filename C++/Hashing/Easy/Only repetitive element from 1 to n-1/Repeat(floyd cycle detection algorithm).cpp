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
	int Slow=A[0];
	int Fast=A[0];
	do
	{
		Slow=A[Slow];
		Fast=A[A[Fast]];
	}
	while(Slow!=Fast);
	Fast=A[0];
	while(Slow!=Fast)
	{
		Slow=A[Slow];
		Fast=A[Fast];
	}
	cout<<Slow;
}