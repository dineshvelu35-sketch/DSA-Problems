#include<bits/stdc++.h>
using namespace std;
void Rev(int Left,int Right,int N,vector<int>&A)
{//cout<<A[Left]<<" "<<A[Right]<<" "<<Left+1<<" "<<Right+1<<endl;
	if(Left>=Right)
		return ;
	swap(A[Left],A[Right]);
	return Rev(Left+1,Right-1,N,A);
	
	
}
int main()
{
	int N;
	cin>>N;
	vector<int>A(N);
	for(int i=0;i<N;i++)
	{
		cin>>A[i];	
	}
	for(int i=0;i<N;i++)
	{
		cout<<A[i]<<" ";
	}
	cout<<endl;
	Rev(0,A.size()-1,N,A);
	for(int i=0;i<N;i++)
	{
		cout<<A[i]<<" ";
	}
	return 0;
}