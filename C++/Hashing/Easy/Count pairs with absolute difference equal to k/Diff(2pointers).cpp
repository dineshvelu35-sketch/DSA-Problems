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
	int Cnt=0;
	int i=0,j=0,N=A.size();
	sort(A.begin(),A.end());
	while(j<N)
	{
		if(A[i]-A[j]>T)
		{
			j++;
		}
		else if(A[i]-A[j]<T)
		{
			i++;
		}
		else
		{
			int ele1=A[i],ele2=A[j];
			int Cnt1=0,Cnt2=0;
			while(j<N && A[j]==ele2)
			{
				j++;
				Cnt1++;
			}
			while(i<N && A[i]==ele1)
			{
				i++;
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
	