#include<bits/stdc++.h>
using namespace std;
bool subset(vector<int>&A,vector<int>&B)
{
	unordered_map<int,int>mp;
	int Count=0,Len=B.size();
	for(auto x:A)
	{
		mp[x]++;
	}
	for(auto x:B)
	{
		mp[x]++;
	}
	for(int i=0;i<A.size();i++)
	{
		if(mp[A[i]]==2)
		{
			Count++;
		}
	}
	return Count==Len;
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