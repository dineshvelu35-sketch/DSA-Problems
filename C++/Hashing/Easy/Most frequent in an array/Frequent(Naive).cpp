#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> A;
	string S;;
	getline(cin,S);
	stringstream ss(S);
	int x;
	while(ss>>x)
	{
		A.push_back(x);
	}
	int MaxCnt=INT_MIN,Max=INT_MIN;
	for(int i=0;i<A.size();i++)
	{
		int Cnt=0;
		for(int j=0;j<A.size();j++)
		{
			if(A[i]==A[j])
			{
				Cnt++;
			}
		}
		if(MaxCnt<Cnt || (MaxCnt==Cnt && Max<A[i]))
		{
			MaxCnt=Cnt;
			Max=A[i];
		}
	}
	cout<<Max;;
}