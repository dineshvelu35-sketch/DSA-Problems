#include<bits/stdc++.h>
using namespace std;
bool subset(vector<int> &A,vector<int> &B)
{
	multiset<int> mp(A.begin(),A.end());
	for(int i=0;i<B.size();i++)
	{
		if(mp.find(B[i])==mp.end())
		{
			return false;
		}
	}
	return true;
}
int main()
{
	vector<int> A,B;
	string line;
	int x;
	getline(cin,line);
	stringstream ss1(line);
	while(ss1>>x)
	{
		A.push_back(x);
	}
	getline(cin,line);
	stringstream ss2(line);
	while(ss2>>x)
	{
		B.push_back(x);
	}
	cout<<(subset(A,B)?"True":"False");
	
}