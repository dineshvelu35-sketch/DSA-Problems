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
	int Cnt=0;
	sort(A.begin(),A.end());
	for(int i=1;i<A.size();i++)
	{
		if(A[i]-A[i-1]>1)
		{
			Cnt+=(A[i]-A[i-1])-1;
		}
	}
	cout<<Cnt;
}
	