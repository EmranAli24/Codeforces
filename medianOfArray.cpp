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

		vector<int> v(n);

		for(int i=0;i<n;i++)
		{
			cin >> v[i];
		}

		sort(v.begin(),v.end());

		int p = (n+1)/2 -1;
		int result = count(v.begin()+p,v.end(),v[p]);

		cout << result << endl;
	}
return 0;
}

