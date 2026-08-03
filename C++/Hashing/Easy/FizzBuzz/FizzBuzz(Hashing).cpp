#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	vector<string>Res;
	map<int,string>mp;
	mp[3]="Fizz";
	mp[5]="Buzz";
	for(int i=1;i<=N;i++)
	{
		string S="";
		for(auto d:mp)
		{
			if(i%d.first==0)
			{
				S+=d.second;
			}
		}
		if(S=="")
		{
			S+=to_string(i);
		}
		Res.push_back(S);
	}
	for(int i=0;i<Res.size();i++)
	{
		cout<<Res[i]<<endl;
	}
}