#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int arr[n];

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	int count=1, max=1 ;

	for(int i=0;i<n-1;i++)
	{
		if(arr[i]<arr[i+1])
		{
			count++;
		}

		else
			count = 1;

		if(max<count)
			max=count;
	}

	cout << max << endl;

	return 0;
}

	

