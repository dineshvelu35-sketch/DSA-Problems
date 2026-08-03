#include<bits/stdc++.h>
using namespace std;
bool subset(vector<int> &A,vector<int> &B)
{
	for(int i=0;i<B.size();i++)
	{
		bool found= false;
		for(int j=0;j<A.size();j++)
		{
			if(A[j]==B[i])
			{
				found=true;
				break;
			}
		}
		if(found)
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