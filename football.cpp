#include<bits/stdc++.h>

using namespace std;
int main()
{
	string s;
	int count=1;
	cin >> s;

	for(int i=0;i<s.size();i++)
	{
		for(int j=0;j<s.size();j++)
		{
			if(s[i]==s[j])
			{
				count++;
				if(s[j]!=s[j+1])
					count=1;
			}
			else
				count=1;
			if(count>=7)
			{
				cout<<"YES"<<endl;

				return 0;
			}

			//		if(s[i]!=s[j])
			//	{
			//		count=0;
			//	}

		}

	}

	cout << "NO"<<endl;



}
