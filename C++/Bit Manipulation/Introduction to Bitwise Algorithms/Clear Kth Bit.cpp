// 0111 |7
// 1101 |~(1<<1)
// ----
// 0101 |5
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,P;
	cin>>N>>P;
	cout<<(1<<P)<<endl;
	cout<<~(1<<P)<<endl;
	cout<<(N&=(~(1<<P)));
}


