#include<bits/stdc++.h>
using namespace std;
void f(int i,int N)
{
	cout<<i<<" ";
	if(i>=N)
		return;
	f(i+1,N);
}
void F(int i,int N)
{
	cout<<i<<endl;
	if(i>=N)
		return;
	F(i+1,N);
}
int main()
{
	int N;
	cin>>N;
	f(1,N);
	cout<<endl<<endl;
	F(1,N);
	return 0;
}