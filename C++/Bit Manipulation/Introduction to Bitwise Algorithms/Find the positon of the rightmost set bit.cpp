#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int c=N&(N-1);
	cout<<c<<endl;
	N=N^(N&(N-1));
	bitset<3>b(N);
	int Pos=0;
	while(N)
	{
		N>>=1;
		Pos++;
	}
	cout<<Pos<<endl;
	cout<<b;
}