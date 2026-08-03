#include<bits/stdc++.h>
using namespace std;
int sum(int Sum,int N) //parametrised way
{
	if(N<1)
	{
		return Sum;
	}
	return sum(Sum+N,N-1);
}
int SUM(int N)	// functional way
{
	if(N==0)
	{
		return 0;
	}
	return N+SUM(N-1);
}
int main()
{
	int N;
	cin>>N;
	cout<<sum(0,N)<<endl;
	cout<<SUM(N);
}