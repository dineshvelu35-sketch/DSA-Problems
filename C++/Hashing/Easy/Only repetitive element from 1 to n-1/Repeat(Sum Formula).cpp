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
	int N=A.size();
	int Sum=accumulate(A.begin(),A.end(),0);
	int Total=(N*(N-1)/2);
	cout<<Sum-Total;
}