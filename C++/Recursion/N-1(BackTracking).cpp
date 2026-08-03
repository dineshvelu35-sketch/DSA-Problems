#include<bits/stdc++.h>
using namespace std;
void f(int i,int N)
{
	if(i>N)
		return;
	f(i+1,N);
	cout<<i<<" ";
	
}
int main()
{
	int N;
	cin>>N;
	f(1,N);
}