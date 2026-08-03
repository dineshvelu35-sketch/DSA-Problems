#include<bits/stdc++.h>
using namespace std;
bool Equal(vector<int> &A, vector<int> &B)
{
	sort(A.begin(),A.end());
	sort(B.begin(),B.end());\
	for(int i=0;i<A.size();i++)
	{
		if(A[i]!=B[i])
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
    cout<<(Equal(A,B)?"true":"false");
}