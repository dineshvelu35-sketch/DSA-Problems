#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> A;
	int x;
	while(cin>>x && x!=-1)
	{
		A.push_back(x);
	}
	int Res=0;
	for(int i=0;i<A.size();i++)
	{
		for(int j=i+1;j<A.size();j++)
		{
			if(A[i]==A[j])
			{
				Res=max(Res,j-i);
			}
		}
	}
	cout<<Res;
}