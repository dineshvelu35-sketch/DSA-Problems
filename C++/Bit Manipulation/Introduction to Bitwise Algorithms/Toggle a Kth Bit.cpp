// 100  |4
// 010  |(1<<1)
// ----
// 110  |6
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,P;
	cin>>N>>P;
	N^=(1<<P);
	cout<<N;
}