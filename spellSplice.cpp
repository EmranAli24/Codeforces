#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int size ;
        cin >> size;

   

    vector<pair<int,int>> v; 

        for(int i=0; i<size ; i++)
        {
            int x,y ;
            cin >> x  >> y ;
            v.push_back(make_pair(x,y));
        }
 
        int max = 0;

        for(int i=0; i<size;i++)
        {
            for(int j=0; j<size; j++)
            {
                if(i==j)
                     continue;
                else{ 
                    int product = v[i].first*v[j].second + v[i].second*v[j].first;
                    if(product > max)
                    max = product ;
                }
            }

        } 

        cout << max << endl;
        
        } 
    }
