//finding the gcd of given two (integers factorial);

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,gcd=1;

	cin>> a >> b;

	for(int i=2;i<=min(a,b);i++)
		gcd*=i;

		cout << gcd <<endl;

		return 0;
}
