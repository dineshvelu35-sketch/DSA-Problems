#include<bits/stdc++.h>
using namespace std;
int Fib(int N)
{
	if(N<=1)
	{
		return N;
	}
	return Fib(N-1)+Fib(N-2);
}
int main()
{
	int N;
	cin>>N;
	cout<<Fib(N);
}