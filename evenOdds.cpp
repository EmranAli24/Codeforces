#include<bits/stdc++.h>

using namespace std;

int main()
{
 long long int n,k;
	cin >> n >> k;

	(k<=(n+1)/2)?cout<<2*k-1:cout<<2*(k-(n+1)/2);
	cout << endl;
	return 0;
}
