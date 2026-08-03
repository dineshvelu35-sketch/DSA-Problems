#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	vector<string>Res;
	for(int i=1;i<=N;i++)
	{
		if(i%3==0 && i%5==0)
		{
			Res.push_back("FizzBuzz");
		}
		else if(i%3==0)
		{
			Res.push_back("Fizz");
		}
		else if(i%5==0)
		{
			Res.push_back("Buzz");
		}
		else
		{
			Res.push_back(to_string(i));
		}
	}
	for(int i=0;i<Res.size();i++)
	{
		cout<<Res[i]<<endl;
	}
	return 0;
}