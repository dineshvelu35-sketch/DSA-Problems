#include<bits/stdc++.h>
using namespace std;
bool subset(vector<int> &A,vector<int> &B)
{
	multiset<int> mt(A.begin(),A.end());
	for(auto x:B)
	{
		if(mt.find(x)!=mt.end())
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