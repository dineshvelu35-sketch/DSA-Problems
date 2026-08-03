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
	sort(A.begin(),A.end());
	for(int i=1;i<A.size();i++)
	{
		if(A[i-1]==A[i])
		{
			cout<<A[i];
			return 0;
		}
	}
}