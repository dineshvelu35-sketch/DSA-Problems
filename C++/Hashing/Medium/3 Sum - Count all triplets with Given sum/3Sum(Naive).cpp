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
	for(int i=0;i<A.size()-2;i++)
	{
		for(int j=i+1;j<A.size()-1;j++)
		{
			for(int k=j+1;k<A.size();k++)
			{
				if(A[i]+A[j]+A[k]==T)
				{
					Cnt++;	
				}
			}
		}
	}
	cout<<Cnt;
}