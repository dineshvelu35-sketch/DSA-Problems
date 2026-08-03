#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> A;
	int x;
	string S;
	getline(cin,S);
	stringstream ss(S);
	while(ss>>x)
	{
		A.push_back(x);
	}	
	int Cnt=0;
	unordered_set<int>st(A.begin(),A.end());
	int Min= *min_element(A.begin(),A.end());
	int Max= *max_element(A.begin(),A.end());
	for(int i=Min;i<=Max;i++)
	{
		if(st.find(i)==st.end())
		{
			Cnt++;
		}
	}
	cout<<Cnt;
}