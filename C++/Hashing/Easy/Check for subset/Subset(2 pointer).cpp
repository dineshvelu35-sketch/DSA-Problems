#include<bits/stdc++.h>
using namespace std;\
bool subset(vector<int> &A,vector<int> &B)
{
	sort(A.begin(),A.end());
	sort(B.begin(),B.end());
	int i=0,j=0;
	int m=A.size(),n=B.size();
	while(i<m && j<n)
	{
		if(A[i]<B[j])
		{
			i++;
		}
		else if(A[i]==B[j])
		{
			i++;
			j++;
		}
		else
		{
			return false;
		}
	}
	return (j==n);
}

int main()
{
	vector<int>A,B;
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