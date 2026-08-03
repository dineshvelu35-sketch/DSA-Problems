#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N
	int Cnt=0;
	while(N)
	{
		Cnt+=(N&1);
		N>>=1;	
	}
	cout<<Cnt;
}
/*
	it is used to count '1' in bit 
	(N&1) means: if N=5, 101 & 001 = 1
	So,Count+=1.
	then N>>=1 means: 101>>1 = 10
*/