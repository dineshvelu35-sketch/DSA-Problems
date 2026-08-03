// 101
// 100
// ----
// 100
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,P;
	cin>>N>>P;
	bool B=N&(1<<P);
	cout<<B;
}