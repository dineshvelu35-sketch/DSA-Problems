#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	if(N%4==0)
	{
		cout<<N;
	}
	else if(N%4==1)
	{
		cout<<1;
	}
	else if(N%4==2)
	{
		cout<<N+1;
	}
	else if(N%4==3)
	{
		cout<<0;
	}
}

/*  Important Pattern (O(1))
	The XOR from 1 to N follows a repeating pattern based on N % 4.

	N % 4	XOR(1...N)
	0			N
	1			1
	2			N + 1
	3			0
	
	This repeating cycle happens because XOR has these properties:

	x ^ x = 0
	x ^ 0 = x
	XOR is associative and commutative
*/