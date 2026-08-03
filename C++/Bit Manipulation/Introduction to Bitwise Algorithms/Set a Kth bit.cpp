#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,P;
	cin>>N>>P;
	N|=(1<<P);
	cout<<(1<<P)<<endl;
	cout<<N;
}