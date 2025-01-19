#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int  n, k;

        cin >> n >> k;

        vector<int> v,v1;

        for(int i=0; i<n;i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        } 

        v = v1 ;

        int min = distance(v.begin(),min_element(v.begin(),v.end()));

        v[min] = 1 ;
        int sum1 = 0 , sum2 = 0;

        for(int i=0; i<n-1;i++)
        {
            sum1 = abs(v[i] -v[i+1]); 
        }

        v1[min]= k;

         for(int i=0; i<n-1;i++)
        {
            sum2 = abs(v1[i] -v1[i+1]); 
        }

        if(sum1>sum2)
        cout<<sum1<<endl;
        else
        cout << sum2 << endl;

    }
}