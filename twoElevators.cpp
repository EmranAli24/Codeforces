#include<bits/stdc++.h>

using namespace std;
int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		int a,b,c;
		cin >> a >> b >> c;

		int x,y,result;
		x=a-1;
	//	if(b<c && b !=1)
		y=b-1;
		if(c>b || b==1)
		y=(c-b)+(c-0)-1;

		if(x<y)
			cout<<1<<endl;
		else if(x>y)
			cout<<2<<endl;
		else
			cout<<3<<endl;




	}
	return 0;
}
