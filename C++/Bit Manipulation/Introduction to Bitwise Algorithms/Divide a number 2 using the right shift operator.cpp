#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int Ans=N>>1;
	cout<<Ans<<endl;
	bitset<5> bit(N);
	bitset<5>b(Ans);
	cout<<bit<<" "<<b;
}