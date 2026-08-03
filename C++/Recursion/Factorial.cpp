#include<bits/stdc++.h>
using namespace std;
int Fact(int N)
{
	if(N==0)
		return 1;
	return N*Fact(N-1);
}
int main()
{
	int N;
	cin>>N;
	cout<<Fact(N);
}