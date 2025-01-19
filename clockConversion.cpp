#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){

		string s;
		cin >> s;

		int hh,mm;

		hh = (s[0]-'0')*10 + (s[1]-'0');
		mm = (s[3]-'0')*10 + (s[4]-'0');

	if( hh>0 && hh<12)
		cout << setfill('0') << setw(2) << hh << ":" << setfill('0') << setw(2) << mm << ' ' << "AM"<<endl;
	else if(hh>12 && hh<24)
	{
		hh-=12;
		cout << setfill('0') << setw(2) << hh << ":" << setfill('0') << setw(2) << mm << ' ' << "PM"<<endl;

	}
	else if(hh==12)
		cout << setfill('0') << setw(2) << hh << ":" << setfill('0') << setw(2) << mm << ' ' << "PM"<<endl;
	else if(hh==0)
	{	
		hh+=12;
		cout << setfill('0') << setw(2) << hh << ":" << setfill('0') << setw(2) << mm << ' ' << "AM"<<endl;
	}


	}
	return 0;
}
