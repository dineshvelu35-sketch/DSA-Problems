#include<bits/stdc++.h>
using namespace std;
void SubSeq(int i,vector<char>& Arr,vector<char>& Curr)
{
	if(i==Arr.size())
	{
		for(auto it:Curr)
		{
			cout<<it<<" ";
		}
		if(Curr.size()==0)
		{
			cout<<"{}";
		}
		cout<<endl;
		return ;
	}
	Curr.push_back(Arr[i]);
	SubSeq(i+1,Arr,Curr);
	Curr.pop_back();
	SubSeq(i+1,Arr,Curr);
}
int main()
{
	int N;
	cin>>N;
	vector<char>Arr(N);
	for(int i=0;i<N;i++)
	{
		cin>>Arr[i];
	}
	vector<char>A;
	SubSeq(0,Arr,A);
	
}