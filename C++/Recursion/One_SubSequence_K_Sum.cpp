#include<bits/stdc++.h>
using namespace std;
bool SubSum(int i,int Sum,int K,vector<int>& Arr,vector<int>& Curr)
{
	if(i==Arr.size())
	{
		if(Sum==K)
		{
			for(auto it:Curr)
			{
				cout<<it<<" ";
			}	
			cout<<endl;
			return true;
		}
		else
			return false;
	}
	Curr.push_back(Arr[i]);
	if(SubSum(i+1,Sum+Arr[i],K,Arr,Curr))
		return true;
	Curr.pop_back();
	if(SubSum(i+1,Sum,K,Arr,Curr))
		return true;
	return false;
	//cout<<"."<<endl;
}
int main()
{
	int N,K;
	cin>>N>>K;
	vector<int> Arr(N);
	for(int i=0;i<N;i++)
	{
		cin>>Arr[i];
	}
	vector<int>A;
	SubSum(0,0,K,Arr,A);
}