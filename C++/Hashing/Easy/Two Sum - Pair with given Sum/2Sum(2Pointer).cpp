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
	sort(A.begin(),A.end());
	int i=0,j=A.size()-1;
	while(i<j)
	{
		if(A[i]+A[j]==T)
		{
			cout<<"True";
			return 0;		
		}
		else if(A[i]+A[j]<T)
		{
			i++;
		}
		else
		{
			j--;
		}
	}
	cout<<"False";
	return 0;
}