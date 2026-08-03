#include<bits/stdc++.h>
using namespace std;
void  f(int N,string S)
{
	cout<<S<<endl;
	if(N==1)
		return;
	f(N-1,S);
}
int main()
{
	int N;
	string S;
	cin>>N;
	cin.ignore();
	getline(cin,S);
	f(N,S);
	return 0;
}