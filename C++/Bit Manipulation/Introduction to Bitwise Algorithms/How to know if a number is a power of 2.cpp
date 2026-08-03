#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	if(N && (!(N&(N-1))))
	{
		cout<<boolalpha;
		cout<<true;
	}
	else
	{
		cout<<boolalpha;
		cout<<false;
	}
}

/*
   it satisfies  if (N!=0)
   N&(N-1) means   1000 & 0111 which gives zero then
   !(N &(N-1))  used to change 0-1 then 
   we can able to check the whether it is power of two or not.
*/