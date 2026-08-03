#include<bits/stdc++.h>
using namespace std;
void f(int N)
{
	if(N<1)
		return;
	f(N-1);
	cout<<N<<" ";
	
}
int main()
{
	int N;
	cin>>N;
	f(N);
}