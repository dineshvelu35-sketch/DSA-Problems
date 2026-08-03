#include<bits/stdc++.h>
using namespace std;
void f(int N)
{
	cout<<N<<" ";
	if(N==1)
		return ;
	f(N-1);
}
void F(int N)
{
	cout<<N<<endl;;
	if(N==1)
		return ;
	F(N-1);
}
int main()
{
	int N;
	cin>>N;
	f(N);
	cout<<endl<<endl;
	F(N);
	return 0;
}