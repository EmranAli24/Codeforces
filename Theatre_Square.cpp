#include<bits/stdc++.h>

using namespace std;
int main()
{
	long long int n,m,a;


	cin >> n >> m >> a;

	n = ceil((long double)n/a);
	m = ceil((long double)m/a);
//	cout << n << ' '  << m <<endl;
	long long int  result = m*n ;

	cout << result << endl;

	return 0;
}
