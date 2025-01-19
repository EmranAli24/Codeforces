#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
     int n,m,k;
     cin >> n >> m >> k;

     int maxColor = (n+m-1) / m ;

     if(maxColor+k >= n){
        cout << "NO\n";
     }
     else{
        cout << "YES\n";
     }
    }

}