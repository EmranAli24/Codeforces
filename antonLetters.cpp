#include<bits/stdc++.h>

using namespace std;
int main()
{
 	string s;
	char c;
	cin >> c;
	getline(cin,s);
	s=c+s;

//	cout << s << endl;

	vector<char> v;

	for( int i=0;i<s.size();i++)
	{
		if(s[i]!='}'&&s[i]!='{'&&s[i]!=','&& s[i]!= ' ')
		{
			v.push_back(s[i]);
		}

	}

	// for(auto u:v)
	//	cout << u << " " << endl;
 sort(v.begin(),v.end());
 int sz = unique(v.begin(),v.end())-v.begin();
 cout << sz << endl;
	return 0;
}
