#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> A;
	string S;
	int x;
	getline(cin,S);
	stringstream ss(S);
	while(ss>>x)
	{
		A.push_back(x);
	}
	int K;
	cin>>K;
	if(A.size()%2!=0)
	{
		cout<<"False";
		return 0;
	}
	vector<int>vis(A.size(),-1);
	int Cnt=0;
	for(int i=0;i<A.size();i++)
	{
		for(int j=i+1;j<A.size();j++)
		{
			if((A[i]+A[j])%K==0 && vis[i]==-1 && vis[j]==-1)
			{
				vis[i]=1;
				vis[j]=1;
				Cnt++;
			}
		}
	}
	cout<<((Cnt==A.size()/2)?"True":"False");
}