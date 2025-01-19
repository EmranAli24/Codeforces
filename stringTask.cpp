#include<bits/stdc++.h>

using namespace std;

bool isVowel(char c)
{
	return (c=='a'||c=='o'||c=='y'||c=='e'||c=='u'||c=='i');
}



int main()
{
	string s,ans;
	cin >> s;

	for(auto u:s)
	{
		char c = tolower(u);

		if(isVowel(c)==0)
		{
			ans+='.';
			ans+=c;
		}
	}

	cout<<ans<<endl;
}
