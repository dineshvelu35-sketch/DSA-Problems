#include<bits/stdc++.h>
using namespace std;
bool Equal(vector<int> &A, vector<int> &B)
{
	unordered_map<int, int> mp;
    for (auto x:A)
        mp[x]++;

    for (int i = 0; i < B.size(); i++) {
        if (mp.find(B[i]) == mp.end())
            return false;

        if (mp[B[i]] == 0)
            return false;
      
        mp[B[i]]--;
    }
    return true;
}
int main()
{
	vector<int>A,B;
    string line;
    getline(cin,line);
    stringstream ss(line);
    int x;
    while(ss>>x)
    {
    	A.push_back(x);
    }
    getline(cin,line);
    stringstream ss2(line);
    while(ss2>>x)
    {
    	B.push_back(x);
    }
    cout<<(Equal(A,B)?"true":"false");
}