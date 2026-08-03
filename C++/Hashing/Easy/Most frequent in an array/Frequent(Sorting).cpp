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
	sort(A.begin(),A.end());
	int Cnt=0;
	int MaxCnt=INT_MIN,Max=INT_MIN;
	for(int i=1;i<A.size();i++)
	{
		if(A[i]==A[i-1])
		{
			Cnt++;
		}
		else
		{
			Cnt=0;
		}
		if(MaxCnt<Cnt || (MaxCnt==Cnt && Max<A[i]))
		{
			MaxCnt=Cnt;
			Max=A[i];
		}
	}
	cout<<Max;
}