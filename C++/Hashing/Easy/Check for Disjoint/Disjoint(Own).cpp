#include<bits/stdc++.h>
using namespace std;
bool subset(vector<int> &A,vector<int> &B)
{
	unordered_map<int,int>mp;
	for(auto x:A)
	{
		mp[x]++;
	}
	for(auto x:B)
	{
		mp[x]++;
	}
	for(int i=0;i<B.size();i++)
	{
		if(mp[B[i]]>1)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	vector<int>A,B;
    string line;
    getline(cin,line);
    stringstream ss(line);
    int x;
    while(ss>>x)
    {
    	A.push_back(x);
    }
    getline(cin,line);
    stringstream ss2(line);
    while(ss2>>x)
    {
    	B.push_back(x);
    }
    cout<<(subset(A,B)?"true":"false");
}