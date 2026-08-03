#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> A;
	string S;
	getline(cin,S);
	int x;
	stringstream ss(S);
	while(ss>>x)
	{
		A.push_back(x);
	}
	int T;
	cin>>T;
	unordered_set<int>st;
	//multiset<int>st;
	for(int i=0;i<A.size();i++)
	{
		int Complement=T-A[i];
		if(st.find(Complement)!=st.end())
		{
			cout<<"True";
			return 0;
		}
		else
		{
			st.insert(A[i]);
		}
	}
	cout<<"False";
	return 0;
}