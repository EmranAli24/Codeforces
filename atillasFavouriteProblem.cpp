#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	
	cin >> t;

	while(t--)
	{
		int n;
		cin >> n;

		string s;
		
		cin >> s;

	int sz = *max_element(s.begin(),s.end());

	cout << sz-96 << endl;
	
	}

return 0;
}


