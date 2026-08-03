#include <iostream>
using namespace std;

int main() {
    int a = 2, b = 3;
    cout << "a = " << a << " b = " << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "a = " << a << " b = " << b << endl;
    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int A,B;
	cin>>A>>B;
	cout<<A<<" "<<B<<endl;
	A=A^B;
	B=A^B;
	A=A^B;
	cout<<A<<" "<<B;
}
*/