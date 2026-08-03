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
	for(int i=0;i<A.size();i++)
	{
		for(int j=i+1;j<A.size();j++)
		{
			if(abs(A[i]-A[j])==T)
			{
				Cnt++;
			}
		}
	}
	cout<<Cnt;
}