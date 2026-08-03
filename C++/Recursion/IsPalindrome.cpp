#include<bits/stdc++.h>
using namespace std;
bool IsPalindrome(int Left,int Right,string S)
{
	if(Left>=Right)
		return true;
	if(S[Left]==S[Right])
		return IsPalindrome(Left+1 ,Right-1,S);
	return false;
}
int main()
{
	string S;
	getline(cin,S);
	bool check=IsPalindrome(0,S.size()-1,S);
	cout<<check;
	return 0;
}