#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while (n--){

		string a,b,c;
		int check=0;
		cin >> a >> b>> c;

		for(int i=0;i<a.size();i++)
		{

			if(c[i]!=a[i] && c[i]!=b[i])
			{
				
				check++;
			}
		
		}
			
		if(check)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
			
		}
	
	return 0;
}
