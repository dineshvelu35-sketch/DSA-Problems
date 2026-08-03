#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> A;
	string S;
	int x;
	getline(cin,S);
	stringstream ss(S);
	while(ss>>x)
	{
		A.push_back(x);
	}
	int T;
	cin>>T;
	sort(A.begin(),A.end());
	int i=0,j=A.size()-1;
	int Cnt=0;
	while(i<j)
	{
		if(A[i]+A[j]<T)
		{
			i++;
		}
		else if(A[i]+A[j]>T)
		{
			j--;
		}
		else
		{
			int ele1=A[i],ele2=A[j];
			int Cnt1=0,Cnt2=0;
			while(i<=j && A[i]==ele1)
			{
				i++;
				Cnt1++;
			}
			while(i<=j &&  A[j]==ele2)
			{
				j--;
				Cnt2++;
			}
			if(ele1==ele2)
			{
				Cnt+=(Cnt1*(Cnt1-1))/2;
			}
			else
			{
				Cnt+=Cnt1*Cnt2;
			}
		}
	}
	cout<<Cnt;
}