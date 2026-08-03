#include<bits/stdc++.h>
using namespace std;
bool subset(vector<int> &A,vector<int> &B)
{
	for(int i=0;i<B.size();i++)
	{
		bool found=false;
		for(int j=0;j<A.size();j++)
		{
			if(A[j]==B[i])
			{
				found=true;
				break;
			}
		}
		if(!found)
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
	int x;
	getline(cin,line);
	stringstream ss1(line);
	while(ss1 >> x)
	{
		A.push_back(x);
	}
	getline(cin,line);
	stringstream ss2(line);
	while(ss2 >> x)
	{
		B.push_back(x);
	}
	cout<<(subset(A,B)?"True":"False");
	
}